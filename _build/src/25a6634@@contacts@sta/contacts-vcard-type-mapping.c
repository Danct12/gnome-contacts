/* contacts-vcard-type-mapping.c generated by valac 0.47.2.1-ce69, the Vala compiler
 * generated from contacts-vcard-type-mapping.vala, do not modify */

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
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <gee.h>

#define CONTACTS_TYPE_VCARD_TYPE_MAPPING (contacts_vcard_type_mapping_get_type ())
typedef struct _ContactsVcardTypeMapping ContactsVcardTypeMapping;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ContactsVcardTypeMapping {
	const gchar* name;
	const gchar* types[3];
};

GType contacts_vcard_type_mapping_get_type (void) G_GNUC_CONST;
ContactsVcardTypeMapping* contacts_vcard_type_mapping_dup (const ContactsVcardTypeMapping* self);
void contacts_vcard_type_mapping_free (ContactsVcardTypeMapping* self);
#define CONTACTS_VCARD_TYPE_MAPPING_MAX_TYPES 3
gboolean contacts_vcard_type_mapping_contains (ContactsVcardTypeMapping *self,
                                               const gchar* type);
static gboolean contacts_vcard_type_mapping_types_are_equal (const gchar* a,
                                                      const gchar* b);
gboolean contacts_vcard_type_mapping_matches (ContactsVcardTypeMapping *self,
                                              GeeCollection* types);

/** Returns whether the mapping contains the given vcard type. */
gboolean
contacts_vcard_type_mapping_contains (ContactsVcardTypeMapping *self,
                                      const gchar* type)
{
	gboolean result = FALSE;
#line 33 "../src/contacts-vcard-type-mapping.vala"
	g_return_val_if_fail (type != NULL, FALSE);
#line 57 "contacts-vcard-type-mapping.c"
	{
		gint i = 0;
#line 34 "../src/contacts-vcard-type-mapping.vala"
		i = 0;
#line 62 "contacts-vcard-type-mapping.c"
		{
			gboolean _tmp0_ = FALSE;
#line 34 "../src/contacts-vcard-type-mapping.vala"
			_tmp0_ = TRUE;
#line 34 "../src/contacts-vcard-type-mapping.vala"
			while (TRUE) {
#line 69 "contacts-vcard-type-mapping.c"
				gboolean _tmp2_ = FALSE;
				const gchar* _tmp4_;
#line 34 "../src/contacts-vcard-type-mapping.vala"
				if (!_tmp0_) {
#line 74 "contacts-vcard-type-mapping.c"
					gint _tmp1_;
#line 34 "../src/contacts-vcard-type-mapping.vala"
					_tmp1_ = i;
#line 34 "../src/contacts-vcard-type-mapping.vala"
					i = _tmp1_ + 1;
#line 80 "contacts-vcard-type-mapping.c"
				}
#line 34 "../src/contacts-vcard-type-mapping.vala"
				_tmp0_ = FALSE;
#line 34 "../src/contacts-vcard-type-mapping.vala"
				if (i < CONTACTS_VCARD_TYPE_MAPPING_MAX_TYPES) {
#line 86 "contacts-vcard-type-mapping.c"
					const gchar* _tmp3_;
#line 34 "../src/contacts-vcard-type-mapping.vala"
					_tmp3_ = (*self).types[i];
#line 34 "../src/contacts-vcard-type-mapping.vala"
					_tmp2_ = _tmp3_ != NULL;
#line 92 "contacts-vcard-type-mapping.c"
				} else {
#line 34 "../src/contacts-vcard-type-mapping.vala"
					_tmp2_ = FALSE;
#line 96 "contacts-vcard-type-mapping.c"
				}
#line 34 "../src/contacts-vcard-type-mapping.vala"
				if (!_tmp2_) {
#line 34 "../src/contacts-vcard-type-mapping.vala"
					break;
#line 102 "contacts-vcard-type-mapping.c"
				}
#line 35 "../src/contacts-vcard-type-mapping.vala"
				_tmp4_ = (*self).types[i];
#line 35 "../src/contacts-vcard-type-mapping.vala"
				if (contacts_vcard_type_mapping_types_are_equal (_tmp4_, type)) {
#line 36 "../src/contacts-vcard-type-mapping.vala"
					result = TRUE;
#line 36 "../src/contacts-vcard-type-mapping.vala"
					return result;
#line 112 "contacts-vcard-type-mapping.c"
				}
			}
		}
	}
#line 37 "../src/contacts-vcard-type-mapping.vala"
	result = FALSE;
#line 37 "../src/contacts-vcard-type-mapping.vala"
	return result;
#line 121 "contacts-vcard-type-mapping.c"
}

/**
   * Checks whether all items in the VcardTypeMapping are in the specified @types.
   * Even though there might be other values in @types, we ignore them.
   *
   * For example: [ HOME, FOO, PREF, BLAH ] should match the [ HOME ] VCard
   * type, but not [ HOME, FAX ]
   */
gboolean
contacts_vcard_type_mapping_matches (ContactsVcardTypeMapping *self,
                                     GeeCollection* types)
{
	gboolean result = FALSE;
#line 47 "../src/contacts-vcard-type-mapping.vala"
	g_return_val_if_fail (types != NULL, FALSE);
#line 138 "contacts-vcard-type-mapping.c"
	{
		gint i = 0;
#line 48 "../src/contacts-vcard-type-mapping.vala"
		i = 0;
#line 143 "contacts-vcard-type-mapping.c"
		{
			gboolean _tmp0_ = FALSE;
#line 48 "../src/contacts-vcard-type-mapping.vala"
			_tmp0_ = TRUE;
#line 48 "../src/contacts-vcard-type-mapping.vala"
			while (TRUE) {
#line 150 "contacts-vcard-type-mapping.c"
				gboolean _tmp2_ = FALSE;
				gboolean occurs_in_list = FALSE;
#line 48 "../src/contacts-vcard-type-mapping.vala"
				if (!_tmp0_) {
#line 155 "contacts-vcard-type-mapping.c"
					gint _tmp1_;
#line 48 "../src/contacts-vcard-type-mapping.vala"
					_tmp1_ = i;
#line 48 "../src/contacts-vcard-type-mapping.vala"
					i = _tmp1_ + 1;
#line 161 "contacts-vcard-type-mapping.c"
				}
#line 48 "../src/contacts-vcard-type-mapping.vala"
				_tmp0_ = FALSE;
#line 48 "../src/contacts-vcard-type-mapping.vala"
				if (i < CONTACTS_VCARD_TYPE_MAPPING_MAX_TYPES) {
#line 167 "contacts-vcard-type-mapping.c"
					const gchar* _tmp3_;
#line 48 "../src/contacts-vcard-type-mapping.vala"
					_tmp3_ = (*self).types[i];
#line 48 "../src/contacts-vcard-type-mapping.vala"
					_tmp2_ = _tmp3_ != NULL;
#line 173 "contacts-vcard-type-mapping.c"
				} else {
#line 48 "../src/contacts-vcard-type-mapping.vala"
					_tmp2_ = FALSE;
#line 177 "contacts-vcard-type-mapping.c"
				}
#line 48 "../src/contacts-vcard-type-mapping.vala"
				if (!_tmp2_) {
#line 48 "../src/contacts-vcard-type-mapping.vala"
					break;
#line 183 "contacts-vcard-type-mapping.c"
				}
#line 49 "../src/contacts-vcard-type-mapping.vala"
				occurs_in_list = FALSE;
#line 187 "contacts-vcard-type-mapping.c"
				{
					GeeIterator* _type_it = NULL;
					GeeIterator* _tmp4_;
#line 50 "../src/contacts-vcard-type-mapping.vala"
					_tmp4_ = gee_iterable_iterator ((GeeIterable*) types);
#line 50 "../src/contacts-vcard-type-mapping.vala"
					_type_it = _tmp4_;
#line 50 "../src/contacts-vcard-type-mapping.vala"
					while (TRUE) {
#line 197 "contacts-vcard-type-mapping.c"
						GeeIterator* _tmp5_;
						gchar* type = NULL;
						GeeIterator* _tmp6_;
						gpointer _tmp7_;
						const gchar* _tmp8_;
						const gchar* _tmp9_;
#line 50 "../src/contacts-vcard-type-mapping.vala"
						_tmp5_ = _type_it;
#line 50 "../src/contacts-vcard-type-mapping.vala"
						if (!gee_iterator_next (_tmp5_)) {
#line 50 "../src/contacts-vcard-type-mapping.vala"
							break;
#line 210 "contacts-vcard-type-mapping.c"
						}
#line 50 "../src/contacts-vcard-type-mapping.vala"
						_tmp6_ = _type_it;
#line 50 "../src/contacts-vcard-type-mapping.vala"
						_tmp7_ = gee_iterator_get (_tmp6_);
#line 50 "../src/contacts-vcard-type-mapping.vala"
						type = (gchar*) _tmp7_;
#line 51 "../src/contacts-vcard-type-mapping.vala"
						_tmp8_ = type;
#line 51 "../src/contacts-vcard-type-mapping.vala"
						_tmp9_ = (*self).types[i];
#line 51 "../src/contacts-vcard-type-mapping.vala"
						if (contacts_vcard_type_mapping_types_are_equal (_tmp8_, _tmp9_)) {
#line 52 "../src/contacts-vcard-type-mapping.vala"
							occurs_in_list = TRUE;
#line 53 "../src/contacts-vcard-type-mapping.vala"
							_g_free0 (type);
#line 53 "../src/contacts-vcard-type-mapping.vala"
							break;
#line 230 "contacts-vcard-type-mapping.c"
						}
#line 50 "../src/contacts-vcard-type-mapping.vala"
						_g_free0 (type);
#line 234 "contacts-vcard-type-mapping.c"
					}
#line 50 "../src/contacts-vcard-type-mapping.vala"
					_g_object_unref0 (_type_it);
#line 238 "contacts-vcard-type-mapping.c"
				}
#line 57 "../src/contacts-vcard-type-mapping.vala"
				if (!occurs_in_list) {
#line 58 "../src/contacts-vcard-type-mapping.vala"
					result = FALSE;
#line 58 "../src/contacts-vcard-type-mapping.vala"
					return result;
#line 246 "contacts-vcard-type-mapping.c"
				}
			}
		}
	}
#line 60 "../src/contacts-vcard-type-mapping.vala"
	result = TRUE;
#line 60 "../src/contacts-vcard-type-mapping.vala"
	return result;
#line 255 "contacts-vcard-type-mapping.c"
}

static gboolean
contacts_vcard_type_mapping_types_are_equal (const gchar* a,
                                             const gchar* b)
{
	gboolean result = FALSE;
#line 63 "../src/contacts-vcard-type-mapping.vala"
	g_return_val_if_fail (a != NULL, FALSE);
#line 63 "../src/contacts-vcard-type-mapping.vala"
	g_return_val_if_fail (b != NULL, FALSE);
#line 64 "../src/contacts-vcard-type-mapping.vala"
	result = g_ascii_strcasecmp (a, b) == 0;
#line 64 "../src/contacts-vcard-type-mapping.vala"
	return result;
#line 271 "contacts-vcard-type-mapping.c"
}

ContactsVcardTypeMapping*
contacts_vcard_type_mapping_dup (const ContactsVcardTypeMapping* self)
{
	ContactsVcardTypeMapping* dup;
#line 27 "../src/contacts-vcard-type-mapping.vala"
	dup = g_new0 (ContactsVcardTypeMapping, 1);
#line 27 "../src/contacts-vcard-type-mapping.vala"
	memcpy (dup, self, sizeof (ContactsVcardTypeMapping));
#line 27 "../src/contacts-vcard-type-mapping.vala"
	return dup;
#line 284 "contacts-vcard-type-mapping.c"
}

void
contacts_vcard_type_mapping_free (ContactsVcardTypeMapping* self)
{
#line 27 "../src/contacts-vcard-type-mapping.vala"
	g_free (self);
#line 292 "contacts-vcard-type-mapping.c"
}

static GType
contacts_vcard_type_mapping_get_type_once (void)
{
	GType contacts_vcard_type_mapping_type_id;
	contacts_vcard_type_mapping_type_id = g_boxed_type_register_static ("ContactsVcardTypeMapping", (GBoxedCopyFunc) contacts_vcard_type_mapping_dup, (GBoxedFreeFunc) contacts_vcard_type_mapping_free);
	return contacts_vcard_type_mapping_type_id;
}

GType
contacts_vcard_type_mapping_get_type (void)
{
	static volatile gsize contacts_vcard_type_mapping_type_id__volatile = 0;
	if (g_once_init_enter (&contacts_vcard_type_mapping_type_id__volatile)) {
		GType contacts_vcard_type_mapping_type_id;
		contacts_vcard_type_mapping_type_id = contacts_vcard_type_mapping_get_type_once ();
		g_once_init_leave (&contacts_vcard_type_mapping_type_id__volatile, contacts_vcard_type_mapping_type_id);
	}
	return contacts_vcard_type_mapping_type_id__volatile;
}

