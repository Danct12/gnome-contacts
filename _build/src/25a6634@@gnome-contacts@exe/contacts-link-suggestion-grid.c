/* contacts-link-suggestion-grid.c generated by valac 0.47.2.1-ce69, the Vala compiler
 * generated from contacts-link-suggestion-grid.vala, do not modify */

/*
 * Copyright (C) 2011 Alexander Larsson <alexl@redhat.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtk/gtk.h>
#include <glib-object.h>
#include <glib.h>
#include <folks/folks.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "contacts.h"
#include <glib/gi18n-lib.h>
#include <gee.h>

#define CONTACTS_TYPE_LINK_SUGGESTION_GRID (contacts_link_suggestion_grid_get_type ())
#define CONTACTS_LINK_SUGGESTION_GRID(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CONTACTS_TYPE_LINK_SUGGESTION_GRID, ContactsLinkSuggestionGrid))
#define CONTACTS_LINK_SUGGESTION_GRID_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CONTACTS_TYPE_LINK_SUGGESTION_GRID, ContactsLinkSuggestionGridClass))
#define CONTACTS_IS_LINK_SUGGESTION_GRID(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CONTACTS_TYPE_LINK_SUGGESTION_GRID))
#define CONTACTS_IS_LINK_SUGGESTION_GRID_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CONTACTS_TYPE_LINK_SUGGESTION_GRID))
#define CONTACTS_LINK_SUGGESTION_GRID_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CONTACTS_TYPE_LINK_SUGGESTION_GRID, ContactsLinkSuggestionGridClass))

typedef struct _ContactsLinkSuggestionGrid ContactsLinkSuggestionGrid;
typedef struct _ContactsLinkSuggestionGridClass ContactsLinkSuggestionGridClass;
typedef struct _ContactsLinkSuggestionGridPrivate ContactsLinkSuggestionGridPrivate;
enum  {
	CONTACTS_LINK_SUGGESTION_GRID_0_PROPERTY,
	CONTACTS_LINK_SUGGESTION_GRID_NUM_PROPERTIES
};
static GParamSpec* contacts_link_suggestion_grid_properties[CONTACTS_LINK_SUGGESTION_GRID_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define CONTACTS_TYPE_AVATAR (contacts_avatar_get_type ())
#define CONTACTS_AVATAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CONTACTS_TYPE_AVATAR, ContactsAvatar))
#define CONTACTS_AVATAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CONTACTS_TYPE_AVATAR, ContactsAvatarClass))
#define CONTACTS_IS_AVATAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CONTACTS_TYPE_AVATAR))
#define CONTACTS_IS_AVATAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CONTACTS_TYPE_AVATAR))
#define CONTACTS_AVATAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CONTACTS_TYPE_AVATAR, ContactsAvatarClass))

typedef struct _ContactsAvatar ContactsAvatar;
typedef struct _ContactsAvatarClass ContactsAvatarClass;
#define _g_free0(var) (var = (g_free (var), NULL))
enum  {
	CONTACTS_LINK_SUGGESTION_GRID_SUGGESTION_ACCEPTED_SIGNAL,
	CONTACTS_LINK_SUGGESTION_GRID_SUGGESTION_REJECTED_SIGNAL,
	CONTACTS_LINK_SUGGESTION_GRID_NUM_SIGNALS
};
static guint contacts_link_suggestion_grid_signals[CONTACTS_LINK_SUGGESTION_GRID_NUM_SIGNALS] = {0};

struct _ContactsLinkSuggestionGrid {
	GtkGrid parent_instance;
	ContactsLinkSuggestionGridPrivate * priv;
};

struct _ContactsLinkSuggestionGridClass {
	GtkGridClass parent_class;
};

struct _ContactsLinkSuggestionGridPrivate {
	GtkLabel* description_label;
	GtkLabel* extra_info_label;
	GtkButton* accept_button;
	GtkButton* reject_button;
};

static gint ContactsLinkSuggestionGrid_private_offset;
static gpointer contacts_link_suggestion_grid_parent_class = NULL;

GType contacts_link_suggestion_grid_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ContactsLinkSuggestionGrid, g_object_unref)
#define CONTACTS_LINK_SUGGESTION_GRID_AVATAR_SIZE 54
ContactsLinkSuggestionGrid* contacts_link_suggestion_grid_new (FolksIndividual* individual);
ContactsLinkSuggestionGrid* contacts_link_suggestion_grid_construct (GType object_type,
                                                                     FolksIndividual* individual);
GType contacts_avatar_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ContactsAvatar, g_object_unref)
ContactsAvatar* contacts_avatar_new (gint size,
                                     FolksIndividual* individual);
ContactsAvatar* contacts_avatar_construct (GType object_type,
                                           gint size,
                                           FolksIndividual* individual);
static gchar* contacts_link_suggestion_grid_find_extra_description (ContactsLinkSuggestionGrid* self,
                                                             FolksIndividual* individual);
static void __lambda41_ (ContactsLinkSuggestionGrid* self);
static void ___lambda41__gtk_button_clicked (GtkButton* _sender,
                                      gpointer self);
static void __lambda42_ (ContactsLinkSuggestionGrid* self);
static void ___lambda42__gtk_button_clicked (GtkButton* _sender,
                                      gpointer self);
static void contacts_link_suggestion_grid_finalize (GObject * obj);
static GType contacts_link_suggestion_grid_get_type_once (void);

static inline gpointer
contacts_link_suggestion_grid_get_instance_private (ContactsLinkSuggestionGrid* self)
{
	return G_STRUCT_MEMBER_P (self, ContactsLinkSuggestionGrid_private_offset);
}

static void
__lambda41_ (ContactsLinkSuggestionGrid* self)
{
#line 65 "../src/contacts-link-suggestion-grid.vala"
	g_signal_emit (self, contacts_link_suggestion_grid_signals[CONTACTS_LINK_SUGGESTION_GRID_SUGGESTION_REJECTED_SIGNAL], 0);
#line 122 "contacts-link-suggestion-grid.c"
}

static void
___lambda41__gtk_button_clicked (GtkButton* _sender,
                                 gpointer self)
{
#line 65 "../src/contacts-link-suggestion-grid.vala"
	__lambda41_ ((ContactsLinkSuggestionGrid*) self);
#line 131 "contacts-link-suggestion-grid.c"
}

static void
__lambda42_ (ContactsLinkSuggestionGrid* self)
{
#line 66 "../src/contacts-link-suggestion-grid.vala"
	g_signal_emit (self, contacts_link_suggestion_grid_signals[CONTACTS_LINK_SUGGESTION_GRID_SUGGESTION_ACCEPTED_SIGNAL], 0);
#line 139 "contacts-link-suggestion-grid.c"
}

static void
___lambda42__gtk_button_clicked (GtkButton* _sender,
                                 gpointer self)
{
#line 66 "../src/contacts-link-suggestion-grid.vala"
	__lambda42_ ((ContactsLinkSuggestionGrid*) self);
#line 148 "contacts-link-suggestion-grid.c"
}

ContactsLinkSuggestionGrid*
contacts_link_suggestion_grid_construct (GType object_type,
                                         FolksIndividual* individual)
{
	ContactsLinkSuggestionGrid * self = NULL;
	GtkStyleContext* _tmp0_;
	ContactsAvatar* image_frame = NULL;
	ContactsAvatar* _tmp1_;
	ContactsAvatar* _tmp2_;
	ContactsAvatar* _tmp3_;
	ContactsAvatar* _tmp4_;
	ContactsAvatar* _tmp5_;
	GtkLabel* _tmp6_;
	gchar* _tmp7_ = NULL;
	GtkLabel* _tmp16_;
	gchar* extra_info = NULL;
	gchar* _tmp17_;
	const gchar* _tmp18_;
	GtkButton* _tmp22_;
	GtkButton* _tmp23_;
#line 43 "../src/contacts-link-suggestion-grid.vala"
	g_return_val_if_fail (individual != NULL, NULL);
#line 43 "../src/contacts-link-suggestion-grid.vala"
	self = (ContactsLinkSuggestionGrid*) g_object_new (object_type, NULL);
#line 44 "../src/contacts-link-suggestion-grid.vala"
	_tmp0_ = gtk_widget_get_style_context ((GtkWidget*) self);
#line 44 "../src/contacts-link-suggestion-grid.vala"
	gtk_style_context_add_class (_tmp0_, "contacts-suggestion");
#line 46 "../src/contacts-link-suggestion-grid.vala"
	_tmp1_ = contacts_avatar_new (CONTACTS_LINK_SUGGESTION_GRID_AVATAR_SIZE, individual);
#line 46 "../src/contacts-link-suggestion-grid.vala"
	g_object_ref_sink (_tmp1_);
#line 46 "../src/contacts-link-suggestion-grid.vala"
	image_frame = _tmp1_;
#line 47 "../src/contacts-link-suggestion-grid.vala"
	_tmp2_ = image_frame;
#line 47 "../src/contacts-link-suggestion-grid.vala"
	gtk_widget_set_hexpand ((GtkWidget*) _tmp2_, FALSE);
#line 48 "../src/contacts-link-suggestion-grid.vala"
	_tmp3_ = image_frame;
#line 48 "../src/contacts-link-suggestion-grid.vala"
	g_object_set ((GtkWidget*) _tmp3_, "margin", 12, NULL);
#line 49 "../src/contacts-link-suggestion-grid.vala"
	_tmp4_ = image_frame;
#line 49 "../src/contacts-link-suggestion-grid.vala"
	gtk_widget_show ((GtkWidget*) _tmp4_);
#line 50 "../src/contacts-link-suggestion-grid.vala"
	_tmp5_ = image_frame;
#line 50 "../src/contacts-link-suggestion-grid.vala"
	gtk_grid_attach ((GtkGrid*) self, (GtkWidget*) _tmp5_, 0, 0, 1, 2);
#line 52 "../src/contacts-link-suggestion-grid.vala"
	_tmp6_ = self->priv->description_label;
#line 52 "../src/contacts-link-suggestion-grid.vala"
	gtk_label_set_xalign (_tmp6_, (gfloat) 0);
#line 53 "../src/contacts-link-suggestion-grid.vala"
	if (contacts_utils_has_main_persona (individual)) {
#line 207 "contacts-link-suggestion-grid.c"
		const gchar* _tmp8_;
		const gchar* _tmp9_;
		gchar* _tmp10_;
		gchar* _tmp11_;
		gchar* _tmp12_;
#line 54 "../src/contacts-link-suggestion-grid.vala"
		_tmp8_ = folks_individual_get_display_name (individual);
#line 54 "../src/contacts-link-suggestion-grid.vala"
		_tmp9_ = _tmp8_;
#line 54 "../src/contacts-link-suggestion-grid.vala"
		_tmp10_ = contacts_utils_format_persona_stores (individual);
#line 54 "../src/contacts-link-suggestion-grid.vala"
		_tmp11_ = _tmp10_;
#line 54 "../src/contacts-link-suggestion-grid.vala"
		_tmp12_ = g_strdup_printf (_ ("Is this the same person as %s from %s?"), _tmp9_, _tmp11_);
#line 54 "../src/contacts-link-suggestion-grid.vala"
		_g_free0 (_tmp7_);
#line 54 "../src/contacts-link-suggestion-grid.vala"
		_tmp7_ = _tmp12_;
#line 54 "../src/contacts-link-suggestion-grid.vala"
		_g_free0 (_tmp11_);
#line 229 "contacts-link-suggestion-grid.c"
	} else {
		const gchar* _tmp13_;
		const gchar* _tmp14_;
		gchar* _tmp15_;
#line 57 "../src/contacts-link-suggestion-grid.vala"
		_tmp13_ = folks_individual_get_display_name (individual);
#line 57 "../src/contacts-link-suggestion-grid.vala"
		_tmp14_ = _tmp13_;
#line 57 "../src/contacts-link-suggestion-grid.vala"
		_tmp15_ = g_strdup_printf (_ ("Is this the same person as %s?"), _tmp14_);
#line 57 "../src/contacts-link-suggestion-grid.vala"
		_g_free0 (_tmp7_);
#line 57 "../src/contacts-link-suggestion-grid.vala"
		_tmp7_ = _tmp15_;
#line 244 "contacts-link-suggestion-grid.c"
	}
#line 53 "../src/contacts-link-suggestion-grid.vala"
	_tmp16_ = self->priv->description_label;
#line 53 "../src/contacts-link-suggestion-grid.vala"
	gtk_label_set_label (_tmp16_, _tmp7_);
#line 59 "../src/contacts-link-suggestion-grid.vala"
	_tmp17_ = contacts_link_suggestion_grid_find_extra_description (self, individual);
#line 59 "../src/contacts-link-suggestion-grid.vala"
	extra_info = _tmp17_;
#line 60 "../src/contacts-link-suggestion-grid.vala"
	_tmp18_ = extra_info;
#line 60 "../src/contacts-link-suggestion-grid.vala"
	if (_tmp18_ != NULL) {
#line 258 "contacts-link-suggestion-grid.c"
		GtkLabel* _tmp19_;
		GtkLabel* _tmp20_;
		const gchar* _tmp21_;
#line 61 "../src/contacts-link-suggestion-grid.vala"
		_tmp19_ = self->priv->extra_info_label;
#line 61 "../src/contacts-link-suggestion-grid.vala"
		gtk_widget_show ((GtkWidget*) _tmp19_);
#line 62 "../src/contacts-link-suggestion-grid.vala"
		_tmp20_ = self->priv->extra_info_label;
#line 62 "../src/contacts-link-suggestion-grid.vala"
		_tmp21_ = extra_info;
#line 62 "../src/contacts-link-suggestion-grid.vala"
		gtk_label_set_label (_tmp20_, _tmp21_);
#line 272 "contacts-link-suggestion-grid.c"
	}
#line 65 "../src/contacts-link-suggestion-grid.vala"
	_tmp22_ = self->priv->reject_button;
#line 65 "../src/contacts-link-suggestion-grid.vala"
	g_signal_connect_object (_tmp22_, "clicked", (GCallback) ___lambda41__gtk_button_clicked, self, 0);
#line 66 "../src/contacts-link-suggestion-grid.vala"
	_tmp23_ = self->priv->accept_button;
#line 66 "../src/contacts-link-suggestion-grid.vala"
	g_signal_connect_object (_tmp23_, "clicked", (GCallback) ___lambda42__gtk_button_clicked, self, 0);
#line 43 "../src/contacts-link-suggestion-grid.vala"
	_g_free0 (extra_info);
#line 43 "../src/contacts-link-suggestion-grid.vala"
	_g_free0 (_tmp7_);
#line 43 "../src/contacts-link-suggestion-grid.vala"
	_g_object_unref0 (image_frame);
#line 43 "../src/contacts-link-suggestion-grid.vala"
	return self;
#line 290 "contacts-link-suggestion-grid.c"
}

ContactsLinkSuggestionGrid*
contacts_link_suggestion_grid_new (FolksIndividual* individual)
{
#line 43 "../src/contacts-link-suggestion-grid.vala"
	return contacts_link_suggestion_grid_construct (CONTACTS_TYPE_LINK_SUGGESTION_GRID, individual);
#line 298 "contacts-link-suggestion-grid.c"
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 71 "../src/contacts-link-suggestion-grid.vala"
	return self ? g_object_ref (self) : NULL;
#line 306 "contacts-link-suggestion-grid.c"
}

static gchar*
contacts_link_suggestion_grid_find_extra_description (ContactsLinkSuggestionGrid* self,
                                                      FolksIndividual* individual)
{
	GeeSet* emails = NULL;
	GeeSet* _tmp0_;
	GeeSet* _tmp1_;
	GeeSet* _tmp2_;
	GeeSet* _tmp3_;
	gboolean _tmp4_;
	gboolean _tmp5_;
	GeeSet* urls = NULL;
	GeeSet* _tmp13_;
	GeeSet* _tmp14_;
	GeeSet* _tmp15_;
	GeeSet* _tmp16_;
	gboolean _tmp17_;
	gboolean _tmp18_;
	GeeSet* phones = NULL;
	GeeSet* _tmp26_;
	GeeSet* _tmp27_;
	GeeSet* _tmp28_;
	GeeSet* _tmp29_;
	gboolean _tmp30_;
	gboolean _tmp31_;
	GeeSet* addresses = NULL;
	GeeSet* _tmp39_;
	GeeSet* _tmp40_;
	GeeSet* _tmp41_;
	GeeSet* _tmp42_;
	gboolean _tmp43_;
	gboolean _tmp44_;
	gchar* result = NULL;
#line 69 "../src/contacts-link-suggestion-grid.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 69 "../src/contacts-link-suggestion-grid.vala"
	g_return_val_if_fail (individual != NULL, NULL);
#line 71 "../src/contacts-link-suggestion-grid.vala"
	_tmp0_ = folks_email_details_get_email_addresses ((FolksEmailDetails*) individual);
#line 71 "../src/contacts-link-suggestion-grid.vala"
	_tmp1_ = _tmp0_;
#line 71 "../src/contacts-link-suggestion-grid.vala"
	_tmp2_ = _g_object_ref0 (_tmp1_);
#line 71 "../src/contacts-link-suggestion-grid.vala"
	emails = _tmp2_;
#line 72 "../src/contacts-link-suggestion-grid.vala"
	_tmp3_ = emails;
#line 72 "../src/contacts-link-suggestion-grid.vala"
	_tmp4_ = gee_collection_get_is_empty ((GeeCollection*) _tmp3_);
#line 72 "../src/contacts-link-suggestion-grid.vala"
	_tmp5_ = _tmp4_;
#line 72 "../src/contacts-link-suggestion-grid.vala"
	if (!_tmp5_) {
#line 362 "contacts-link-suggestion-grid.c"
		GeeSet* _tmp6_;
		gpointer _tmp7_;
		FolksEmailFieldDetails* _tmp8_;
		gconstpointer _tmp9_;
		const gchar* _tmp10_;
		gchar* _tmp11_;
		gchar* _tmp12_;
#line 73 "../src/contacts-link-suggestion-grid.vala"
		_tmp6_ = emails;
#line 73 "../src/contacts-link-suggestion-grid.vala"
		_tmp7_ = contacts_utils_get_first (FOLKS_TYPE_EMAIL_FIELD_DETAILS, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, (GeeCollection*) _tmp6_);
#line 73 "../src/contacts-link-suggestion-grid.vala"
		_tmp8_ = (FolksEmailFieldDetails*) _tmp7_;
#line 73 "../src/contacts-link-suggestion-grid.vala"
		_tmp9_ = folks_abstract_field_details_get_value ((FolksAbstractFieldDetails*) _tmp8_);
#line 73 "../src/contacts-link-suggestion-grid.vala"
		_tmp10_ = _tmp9_;
#line 73 "../src/contacts-link-suggestion-grid.vala"
		_tmp11_ = g_strdup ((const gchar*) _tmp10_);
#line 73 "../src/contacts-link-suggestion-grid.vala"
		_tmp12_ = _tmp11_;
#line 73 "../src/contacts-link-suggestion-grid.vala"
		_g_object_unref0 (_tmp8_);
#line 73 "../src/contacts-link-suggestion-grid.vala"
		result = _tmp12_;
#line 73 "../src/contacts-link-suggestion-grid.vala"
		_g_object_unref0 (emails);
#line 73 "../src/contacts-link-suggestion-grid.vala"
		return result;
#line 392 "contacts-link-suggestion-grid.c"
	}
#line 76 "../src/contacts-link-suggestion-grid.vala"
	_tmp13_ = folks_url_details_get_urls ((FolksUrlDetails*) individual);
#line 76 "../src/contacts-link-suggestion-grid.vala"
	_tmp14_ = _tmp13_;
#line 76 "../src/contacts-link-suggestion-grid.vala"
	_tmp15_ = _g_object_ref0 (_tmp14_);
#line 76 "../src/contacts-link-suggestion-grid.vala"
	urls = _tmp15_;
#line 77 "../src/contacts-link-suggestion-grid.vala"
	_tmp16_ = urls;
#line 77 "../src/contacts-link-suggestion-grid.vala"
	_tmp17_ = gee_collection_get_is_empty ((GeeCollection*) _tmp16_);
#line 77 "../src/contacts-link-suggestion-grid.vala"
	_tmp18_ = _tmp17_;
#line 77 "../src/contacts-link-suggestion-grid.vala"
	if (!_tmp18_) {
#line 410 "contacts-link-suggestion-grid.c"
		GeeSet* _tmp19_;
		gpointer _tmp20_;
		FolksUrlFieldDetails* _tmp21_;
		gconstpointer _tmp22_;
		const gchar* _tmp23_;
		gchar* _tmp24_;
		gchar* _tmp25_;
#line 78 "../src/contacts-link-suggestion-grid.vala"
		_tmp19_ = urls;
#line 78 "../src/contacts-link-suggestion-grid.vala"
		_tmp20_ = contacts_utils_get_first (FOLKS_TYPE_URL_FIELD_DETAILS, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, (GeeCollection*) _tmp19_);
#line 78 "../src/contacts-link-suggestion-grid.vala"
		_tmp21_ = (FolksUrlFieldDetails*) _tmp20_;
#line 78 "../src/contacts-link-suggestion-grid.vala"
		_tmp22_ = folks_abstract_field_details_get_value ((FolksAbstractFieldDetails*) _tmp21_);
#line 78 "../src/contacts-link-suggestion-grid.vala"
		_tmp23_ = _tmp22_;
#line 78 "../src/contacts-link-suggestion-grid.vala"
		_tmp24_ = g_strdup ((const gchar*) _tmp23_);
#line 78 "../src/contacts-link-suggestion-grid.vala"
		_tmp25_ = _tmp24_;
#line 78 "../src/contacts-link-suggestion-grid.vala"
		_g_object_unref0 (_tmp21_);
#line 78 "../src/contacts-link-suggestion-grid.vala"
		result = _tmp25_;
#line 78 "../src/contacts-link-suggestion-grid.vala"
		_g_object_unref0 (urls);
#line 78 "../src/contacts-link-suggestion-grid.vala"
		_g_object_unref0 (emails);
#line 78 "../src/contacts-link-suggestion-grid.vala"
		return result;
#line 442 "contacts-link-suggestion-grid.c"
	}
#line 81 "../src/contacts-link-suggestion-grid.vala"
	_tmp26_ = folks_phone_details_get_phone_numbers ((FolksPhoneDetails*) individual);
#line 81 "../src/contacts-link-suggestion-grid.vala"
	_tmp27_ = _tmp26_;
#line 81 "../src/contacts-link-suggestion-grid.vala"
	_tmp28_ = _g_object_ref0 (_tmp27_);
#line 81 "../src/contacts-link-suggestion-grid.vala"
	phones = _tmp28_;
#line 82 "../src/contacts-link-suggestion-grid.vala"
	_tmp29_ = phones;
#line 82 "../src/contacts-link-suggestion-grid.vala"
	_tmp30_ = gee_collection_get_is_empty ((GeeCollection*) _tmp29_);
#line 82 "../src/contacts-link-suggestion-grid.vala"
	_tmp31_ = _tmp30_;
#line 82 "../src/contacts-link-suggestion-grid.vala"
	if (!_tmp31_) {
#line 460 "contacts-link-suggestion-grid.c"
		GeeSet* _tmp32_;
		gpointer _tmp33_;
		FolksPhoneFieldDetails* _tmp34_;
		gconstpointer _tmp35_;
		const gchar* _tmp36_;
		gchar* _tmp37_;
		gchar* _tmp38_;
#line 83 "../src/contacts-link-suggestion-grid.vala"
		_tmp32_ = phones;
#line 83 "../src/contacts-link-suggestion-grid.vala"
		_tmp33_ = contacts_utils_get_first (FOLKS_TYPE_PHONE_FIELD_DETAILS, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, (GeeCollection*) _tmp32_);
#line 83 "../src/contacts-link-suggestion-grid.vala"
		_tmp34_ = (FolksPhoneFieldDetails*) _tmp33_;
#line 83 "../src/contacts-link-suggestion-grid.vala"
		_tmp35_ = folks_abstract_field_details_get_value ((FolksAbstractFieldDetails*) _tmp34_);
#line 83 "../src/contacts-link-suggestion-grid.vala"
		_tmp36_ = _tmp35_;
#line 83 "../src/contacts-link-suggestion-grid.vala"
		_tmp37_ = g_strdup ((const gchar*) _tmp36_);
#line 83 "../src/contacts-link-suggestion-grid.vala"
		_tmp38_ = _tmp37_;
#line 83 "../src/contacts-link-suggestion-grid.vala"
		_g_object_unref0 (_tmp34_);
#line 83 "../src/contacts-link-suggestion-grid.vala"
		result = _tmp38_;
#line 83 "../src/contacts-link-suggestion-grid.vala"
		_g_object_unref0 (phones);
#line 83 "../src/contacts-link-suggestion-grid.vala"
		_g_object_unref0 (urls);
#line 83 "../src/contacts-link-suggestion-grid.vala"
		_g_object_unref0 (emails);
#line 83 "../src/contacts-link-suggestion-grid.vala"
		return result;
#line 494 "contacts-link-suggestion-grid.c"
	}
#line 86 "../src/contacts-link-suggestion-grid.vala"
	_tmp39_ = folks_postal_address_details_get_postal_addresses ((FolksPostalAddressDetails*) individual);
#line 86 "../src/contacts-link-suggestion-grid.vala"
	_tmp40_ = _tmp39_;
#line 86 "../src/contacts-link-suggestion-grid.vala"
	_tmp41_ = _g_object_ref0 (_tmp40_);
#line 86 "../src/contacts-link-suggestion-grid.vala"
	addresses = _tmp41_;
#line 87 "../src/contacts-link-suggestion-grid.vala"
	_tmp42_ = addresses;
#line 87 "../src/contacts-link-suggestion-grid.vala"
	_tmp43_ = gee_collection_get_is_empty ((GeeCollection*) _tmp42_);
#line 87 "../src/contacts-link-suggestion-grid.vala"
	_tmp44_ = _tmp43_;
#line 87 "../src/contacts-link-suggestion-grid.vala"
	if (!_tmp44_) {
#line 512 "contacts-link-suggestion-grid.c"
		GeeSet* _tmp45_;
		gpointer _tmp46_;
		FolksPostalAddressFieldDetails* _tmp47_;
		gconstpointer _tmp48_;
		FolksPostalAddress* _tmp49_;
		gchar* _tmp50_;
		gchar* _tmp51_;
#line 88 "../src/contacts-link-suggestion-grid.vala"
		_tmp45_ = addresses;
#line 88 "../src/contacts-link-suggestion-grid.vala"
		_tmp46_ = contacts_utils_get_first (FOLKS_TYPE_POSTAL_ADDRESS_FIELD_DETAILS, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, (GeeCollection*) _tmp45_);
#line 88 "../src/contacts-link-suggestion-grid.vala"
		_tmp47_ = (FolksPostalAddressFieldDetails*) _tmp46_;
#line 88 "../src/contacts-link-suggestion-grid.vala"
		_tmp48_ = folks_abstract_field_details_get_value ((FolksAbstractFieldDetails*) _tmp47_);
#line 88 "../src/contacts-link-suggestion-grid.vala"
		_tmp49_ = _tmp48_;
#line 88 "../src/contacts-link-suggestion-grid.vala"
		_tmp50_ = folks_postal_address_to_string ((FolksPostalAddress*) _tmp49_);
#line 88 "../src/contacts-link-suggestion-grid.vala"
		_tmp51_ = _tmp50_;
#line 88 "../src/contacts-link-suggestion-grid.vala"
		_g_object_unref0 (_tmp47_);
#line 88 "../src/contacts-link-suggestion-grid.vala"
		result = _tmp51_;
#line 88 "../src/contacts-link-suggestion-grid.vala"
		_g_object_unref0 (addresses);
#line 88 "../src/contacts-link-suggestion-grid.vala"
		_g_object_unref0 (phones);
#line 88 "../src/contacts-link-suggestion-grid.vala"
		_g_object_unref0 (urls);
#line 88 "../src/contacts-link-suggestion-grid.vala"
		_g_object_unref0 (emails);
#line 88 "../src/contacts-link-suggestion-grid.vala"
		return result;
#line 548 "contacts-link-suggestion-grid.c"
	}
#line 91 "../src/contacts-link-suggestion-grid.vala"
	result = NULL;
#line 91 "../src/contacts-link-suggestion-grid.vala"
	_g_object_unref0 (addresses);
#line 91 "../src/contacts-link-suggestion-grid.vala"
	_g_object_unref0 (phones);
#line 91 "../src/contacts-link-suggestion-grid.vala"
	_g_object_unref0 (urls);
#line 91 "../src/contacts-link-suggestion-grid.vala"
	_g_object_unref0 (emails);
#line 91 "../src/contacts-link-suggestion-grid.vala"
	return result;
#line 562 "contacts-link-suggestion-grid.c"
}

static void
contacts_link_suggestion_grid_class_init (ContactsLinkSuggestionGridClass * klass,
                                          gpointer klass_data)
{
#line 28 "../src/contacts-link-suggestion-grid.vala"
	contacts_link_suggestion_grid_parent_class = g_type_class_peek_parent (klass);
#line 28 "../src/contacts-link-suggestion-grid.vala"
	g_type_class_adjust_private_offset (klass, &ContactsLinkSuggestionGrid_private_offset);
#line 28 "../src/contacts-link-suggestion-grid.vala"
	G_OBJECT_CLASS (klass)->finalize = contacts_link_suggestion_grid_finalize;
#line 28 "../src/contacts-link-suggestion-grid.vala"
	gtk_widget_class_set_template_from_resource (GTK_WIDGET_CLASS (klass), "/org/gnome/Contacts/ui/contacts-link-suggestion-grid.ui");
#line 28 "../src/contacts-link-suggestion-grid.vala"
	contacts_link_suggestion_grid_signals[CONTACTS_LINK_SUGGESTION_GRID_SUGGESTION_ACCEPTED_SIGNAL] = g_signal_new ("suggestion-accepted", CONTACTS_TYPE_LINK_SUGGESTION_GRID, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 28 "../src/contacts-link-suggestion-grid.vala"
	contacts_link_suggestion_grid_signals[CONTACTS_LINK_SUGGESTION_GRID_SUGGESTION_REJECTED_SIGNAL] = g_signal_new ("suggestion-rejected", CONTACTS_TYPE_LINK_SUGGESTION_GRID, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 28 "../src/contacts-link-suggestion-grid.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "description_label", FALSE, ContactsLinkSuggestionGrid_private_offset + G_STRUCT_OFFSET (ContactsLinkSuggestionGridPrivate, description_label));
#line 28 "../src/contacts-link-suggestion-grid.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "extra_info_label", FALSE, ContactsLinkSuggestionGrid_private_offset + G_STRUCT_OFFSET (ContactsLinkSuggestionGridPrivate, extra_info_label));
#line 28 "../src/contacts-link-suggestion-grid.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "accept_button", FALSE, ContactsLinkSuggestionGrid_private_offset + G_STRUCT_OFFSET (ContactsLinkSuggestionGridPrivate, accept_button));
#line 28 "../src/contacts-link-suggestion-grid.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "reject_button", FALSE, ContactsLinkSuggestionGrid_private_offset + G_STRUCT_OFFSET (ContactsLinkSuggestionGridPrivate, reject_button));
#line 589 "contacts-link-suggestion-grid.c"
}

static void
contacts_link_suggestion_grid_instance_init (ContactsLinkSuggestionGrid * self,
                                             gpointer klass)
{
#line 28 "../src/contacts-link-suggestion-grid.vala"
	self->priv = contacts_link_suggestion_grid_get_instance_private (self);
#line 28 "../src/contacts-link-suggestion-grid.vala"
	gtk_widget_init_template (GTK_WIDGET (self));
#line 600 "contacts-link-suggestion-grid.c"
}

static void
contacts_link_suggestion_grid_finalize (GObject * obj)
{
	ContactsLinkSuggestionGrid * self;
#line 28 "../src/contacts-link-suggestion-grid.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, CONTACTS_TYPE_LINK_SUGGESTION_GRID, ContactsLinkSuggestionGrid);
#line 32 "../src/contacts-link-suggestion-grid.vala"
	_g_object_unref0 (self->priv->description_label);
#line 34 "../src/contacts-link-suggestion-grid.vala"
	_g_object_unref0 (self->priv->extra_info_label);
#line 36 "../src/contacts-link-suggestion-grid.vala"
	_g_object_unref0 (self->priv->accept_button);
#line 38 "../src/contacts-link-suggestion-grid.vala"
	_g_object_unref0 (self->priv->reject_button);
#line 28 "../src/contacts-link-suggestion-grid.vala"
	G_OBJECT_CLASS (contacts_link_suggestion_grid_parent_class)->finalize (obj);
#line 619 "contacts-link-suggestion-grid.c"
}

/**
 * The LinkSuggestionGrid is show at the bottom of the ContactPane.
 * It offers the user the sugugestion of linking the currently shown contact
 * and another (hopefully) similar contact.
 */
static GType
contacts_link_suggestion_grid_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ContactsLinkSuggestionGridClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) contacts_link_suggestion_grid_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ContactsLinkSuggestionGrid), 0, (GInstanceInitFunc) contacts_link_suggestion_grid_instance_init, NULL };
	GType contacts_link_suggestion_grid_type_id;
	contacts_link_suggestion_grid_type_id = g_type_register_static (gtk_grid_get_type (), "ContactsLinkSuggestionGrid", &g_define_type_info, 0);
	ContactsLinkSuggestionGrid_private_offset = g_type_add_instance_private (contacts_link_suggestion_grid_type_id, sizeof (ContactsLinkSuggestionGridPrivate));
	return contacts_link_suggestion_grid_type_id;
}

GType
contacts_link_suggestion_grid_get_type (void)
{
	static volatile gsize contacts_link_suggestion_grid_type_id__volatile = 0;
	if (g_once_init_enter (&contacts_link_suggestion_grid_type_id__volatile)) {
		GType contacts_link_suggestion_grid_type_id;
		contacts_link_suggestion_grid_type_id = contacts_link_suggestion_grid_get_type_once ();
		g_once_init_leave (&contacts_link_suggestion_grid_type_id__volatile, contacts_link_suggestion_grid_type_id);
	}
	return contacts_link_suggestion_grid_type_id__volatile;
}

