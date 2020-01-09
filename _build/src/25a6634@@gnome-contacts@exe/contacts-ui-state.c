/* contacts-ui-state.c generated by valac 0.47.2.1-ce69, the Vala compiler
 * generated from contacts-ui-state.vala, do not modify */

/*
 * Copyright (C) 2018 Niels De Graef <nielsdegraef@gmail.com>
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

#include <glib-object.h>
#include <glib.h>

typedef enum  {
	CONTACTS_UI_STATE_NORMAL,
	CONTACTS_UI_STATE_SHOWING,
	CONTACTS_UI_STATE_SELECTING,
	CONTACTS_UI_STATE_UPDATING,
	CONTACTS_UI_STATE_CREATING
} ContactsUiState;

#define CONTACTS_TYPE_UI_STATE (contacts_ui_state_get_type ())

GType contacts_ui_state_get_type (void) G_GNUC_CONST;
gboolean contacts_ui_state_editing (ContactsUiState self);

/**
 * Roughly put, the behaviour of the UI of Contacts can be divided in several
 * categories. We represent this with the UiState enum, which can be shared
 * (and sync-ed) between the different parts of the app.
 *
 * Note that there is one exception to this: the initial setup is handled
 * completely separately in the {@link SetupWindow}.
 */
/**
   * Returns whether we're editing a contact, either by changing an existing
   * one, or by creating a new one.
   */
gboolean
contacts_ui_state_editing (ContactsUiState self)
{
	gboolean _tmp0_ = FALSE;
	gboolean result = FALSE;
#line 58 "../src/contacts-ui-state.vala"
	if (self == CONTACTS_UI_STATE_UPDATING) {
#line 58 "../src/contacts-ui-state.vala"
		_tmp0_ = TRUE;
#line 59 "contacts-ui-state.c"
	} else {
#line 58 "../src/contacts-ui-state.vala"
		_tmp0_ = self == CONTACTS_UI_STATE_CREATING;
#line 63 "contacts-ui-state.c"
	}
#line 58 "../src/contacts-ui-state.vala"
	result = _tmp0_;
#line 58 "../src/contacts-ui-state.vala"
	return result;
#line 69 "contacts-ui-state.c"
}

static GType
contacts_ui_state_get_type_once (void)
{
	static const GEnumValue values[] = {{CONTACTS_UI_STATE_NORMAL, "CONTACTS_UI_STATE_NORMAL", "normal"}, {CONTACTS_UI_STATE_SHOWING, "CONTACTS_UI_STATE_SHOWING", "showing"}, {CONTACTS_UI_STATE_SELECTING, "CONTACTS_UI_STATE_SELECTING", "selecting"}, {CONTACTS_UI_STATE_UPDATING, "CONTACTS_UI_STATE_UPDATING", "updating"}, {CONTACTS_UI_STATE_CREATING, "CONTACTS_UI_STATE_CREATING", "creating"}, {0, NULL, NULL}};
	GType contacts_ui_state_type_id;
	contacts_ui_state_type_id = g_enum_register_static ("ContactsUiState", values);
	return contacts_ui_state_type_id;
}

GType
contacts_ui_state_get_type (void)
{
	static volatile gsize contacts_ui_state_type_id__volatile = 0;
	if (g_once_init_enter (&contacts_ui_state_type_id__volatile)) {
		GType contacts_ui_state_type_id;
		contacts_ui_state_type_id = contacts_ui_state_get_type_once ();
		g_once_init_leave (&contacts_ui_state_type_id__volatile, contacts_ui_state_type_id);
	}
	return contacts_ui_state_type_id__volatile;
}

