/* -*- Mode: vala; indent-tabs-mode: t; c-basic-offset: 2; tab-width: 8 -*- */
/*
 * Copyright (C) 2011 Alexander Larsson <alexl@redhat.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

using Gtk;
using Folks;
using Gee;

namespace Contacts {
  public class LinkOperation : Object {
    private weak Store store;
    private HashSet<HashSet<Persona>> personas_to_link;
    private bool finished { get; set; default = false; }

    public LinkOperation(Store store) {
      this.store = store;
      this.personas_to_link = new HashSet<HashSet<Persona>> ();
    }

    /* Link individuals */
    public async void do (LinkedList<Individual> individuals) {
      var personas_to_link = new HashSet<Persona> ();
      foreach (var i in individuals) {
        var saved_personas = new HashSet<Persona> ();
        foreach (var persona in i.personas) {
          personas_to_link.add (persona);
          saved_personas.add (persona);
        }
        this.personas_to_link.add (saved_personas);
      }
      try {
        yield this.store.aggregator.link_personas (personas_to_link);
      } catch (Error e) {
        error ("Coulnd't link contacts: %s", e.message);
      }
      finished = true;
    }

    /* Undo the linking */
    public async void undo () {
      var individual = this.personas_to_link.first_match(() => {return true;})
        .first_match(() => {return true;}).individual;
      yield store.aggregator.unlink_individual (individual);
      foreach (var personas in personas_to_link) {
        try {
          yield this.store.aggregator.link_personas (personas);
        } catch (Error e) {
          error ("Coulnd't link contacts: %s", e.message);
        }
      }
    }
  }

  public class UnLinkOperation : Object {
    private weak Store store;

    private HashSet<Persona> personas;

    public UnLinkOperation(Store store) {
      this.store = store;
      this.personas = new HashSet<Persona> ();
    }

    /* Remove a personas from individual */
    public async void do (Individual main) {
      foreach (var persona in main.personas)
          personas.add (persona);

      try {
        yield store.aggregator.unlink_individual (main);
      } catch (Error e) {
        error ("Coulnd't link contacts: %s", e.message);
      }
    }

    /* Undo the unlinking */
    public async void undo () {
      try {
        yield this.store.aggregator.link_personas (personas);
      } catch (Error e) {
        error ("Coulnd't link contacts: %s", e.message);
      }
    }
  }
}
