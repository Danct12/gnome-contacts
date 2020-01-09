/* contacts-linked-personas-dialog.c generated by valac 0.47.2.1-ce69, the Vala compiler
 * generated from contacts-linked-personas-dialog.vala, do not modify */

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

#include <gtk/gtk.h>
#include <glib-object.h>
#include <glib.h>
#include <folks/folks.h>
#include "contacts.h"
#include <gee.h>
#include <glib/gi18n-lib.h>
#include <gio/gio.h>

#define CONTACTS_TYPE_LINKED_PERSONAS_DIALOG (contacts_linked_personas_dialog_get_type ())
#define CONTACTS_LINKED_PERSONAS_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CONTACTS_TYPE_LINKED_PERSONAS_DIALOG, ContactsLinkedPersonasDialog))
#define CONTACTS_LINKED_PERSONAS_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CONTACTS_TYPE_LINKED_PERSONAS_DIALOG, ContactsLinkedPersonasDialogClass))
#define CONTACTS_IS_LINKED_PERSONAS_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CONTACTS_TYPE_LINKED_PERSONAS_DIALOG))
#define CONTACTS_IS_LINKED_PERSONAS_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CONTACTS_TYPE_LINKED_PERSONAS_DIALOG))
#define CONTACTS_LINKED_PERSONAS_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CONTACTS_TYPE_LINKED_PERSONAS_DIALOG, ContactsLinkedPersonasDialogClass))

typedef struct _ContactsLinkedPersonasDialog ContactsLinkedPersonasDialog;
typedef struct _ContactsLinkedPersonasDialogClass ContactsLinkedPersonasDialogClass;
typedef struct _ContactsLinkedPersonasDialogPrivate ContactsLinkedPersonasDialogPrivate;
enum  {
	CONTACTS_LINKED_PERSONAS_DIALOG_0_PROPERTY,
	CONTACTS_LINKED_PERSONAS_DIALOG_NUM_PROPERTIES
};
static GParamSpec* contacts_linked_personas_dialog_properties[CONTACTS_LINKED_PERSONAS_DIALOG_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define CONTACTS_TYPE_WINDOW (contacts_window_get_type ())
#define CONTACTS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CONTACTS_TYPE_WINDOW, ContactsWindow))
#define CONTACTS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CONTACTS_TYPE_WINDOW, ContactsWindowClass))
#define CONTACTS_IS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CONTACTS_TYPE_WINDOW))
#define CONTACTS_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CONTACTS_TYPE_WINDOW))
#define CONTACTS_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CONTACTS_TYPE_WINDOW, ContactsWindowClass))

typedef struct _ContactsWindow ContactsWindow;
typedef struct _ContactsWindowClass ContactsWindowClass;
typedef struct _Block21Data Block21Data;
typedef struct _Block22Data Block22Data;

#define CONTACTS_TYPE_AVATAR (contacts_avatar_get_type ())
#define CONTACTS_AVATAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CONTACTS_TYPE_AVATAR, ContactsAvatar))
#define CONTACTS_AVATAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CONTACTS_TYPE_AVATAR, ContactsAvatarClass))
#define CONTACTS_IS_AVATAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CONTACTS_TYPE_AVATAR))
#define CONTACTS_IS_AVATAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CONTACTS_TYPE_AVATAR))
#define CONTACTS_AVATAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CONTACTS_TYPE_AVATAR, ContactsAvatarClass))

typedef struct _ContactsAvatar ContactsAvatar;
typedef struct _ContactsAvatarClass ContactsAvatarClass;
#define _g_free0(var) (var = (g_free (var), NULL))

#define CONTACTS_TYPE_LINK_OPERATION (contacts_link_operation_get_type ())
#define CONTACTS_LINK_OPERATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CONTACTS_TYPE_LINK_OPERATION, ContactsLinkOperation))
#define CONTACTS_LINK_OPERATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CONTACTS_TYPE_LINK_OPERATION, ContactsLinkOperationClass))
#define CONTACTS_IS_LINK_OPERATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CONTACTS_TYPE_LINK_OPERATION))
#define CONTACTS_IS_LINK_OPERATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CONTACTS_TYPE_LINK_OPERATION))
#define CONTACTS_LINK_OPERATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CONTACTS_TYPE_LINK_OPERATION, ContactsLinkOperationClass))

typedef struct _ContactsLinkOperation ContactsLinkOperation;
typedef struct _ContactsLinkOperationClass ContactsLinkOperationClass;

struct _ContactsLinkedPersonasDialog {
	GtkDialog parent_instance;
	ContactsLinkedPersonasDialogPrivate * priv;
	gboolean any_unlinked;
};

struct _ContactsLinkedPersonasDialogClass {
	GtkDialogClass parent_class;
};

struct _ContactsLinkedPersonasDialogPrivate {
	GtkListBox* linked_accounts_view;
	FolksIndividual* individual;
};

struct _Block21Data {
	int _ref_count_;
	ContactsLinkedPersonasDialog* self;
	ContactsStore* store;
	FolksIndividual* individual;
};

struct _Block22Data {
	int _ref_count_;
	Block21Data * _data21_;
	FolksPersona* p;
	GtkGrid* row_grid;
};

static gint ContactsLinkedPersonasDialog_private_offset;
static gpointer contacts_linked_personas_dialog_parent_class = NULL;

GType contacts_linked_personas_dialog_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ContactsLinkedPersonasDialog, g_object_unref)
#define CONTACTS_LINKED_PERSONAS_DIALOG_AVATAR_SIZE 54
GType contacts_window_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ContactsWindow, g_object_unref)
ContactsLinkedPersonasDialog* contacts_linked_personas_dialog_new (ContactsWindow* main_win,
                                                                   ContactsStore* store,
                                                                   FolksIndividual* individual);
ContactsLinkedPersonasDialog* contacts_linked_personas_dialog_construct (GType object_type,
                                                                         ContactsWindow* main_win,
                                                                         ContactsStore* store,
                                                                         FolksIndividual* individual);
static Block21Data* block21_data_ref (Block21Data* _data21_);
static void block21_data_unref (void * _userdata_);
static void _contacts_add_separator_gtk_list_box_update_header_func (GtkListBoxRow* row,
                                                              GtkListBoxRow* before,
                                                              gpointer self);
static Block22Data* block22_data_ref (Block22Data* _data22_);
static void block22_data_unref (void * _userdata_);
GType contacts_avatar_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ContactsAvatar, g_object_unref)
ContactsAvatar* contacts_avatar_new (gint size,
                                     FolksIndividual* individual);
ContactsAvatar* contacts_avatar_construct (GType object_type,
                                           gint size,
                                           FolksIndividual* individual);
static void ____lambda46_ (Block22Data* _data22_);
void contacts_unlink_persona (ContactsStore* store,
                              FolksIndividual* individual,
                              FolksPersona* persona_to_unlink,
                              GAsyncReadyCallback _callback_,
                              gpointer _user_data_);
GType contacts_link_operation_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ContactsLinkOperation, g_object_unref)
ContactsLinkOperation* contacts_unlink_persona_finish (GAsyncResult* _res_);
static void __lambda47_ (Block22Data* _data22_,
                  GObject* obj,
                  GAsyncResult* _result_);
static void ___lambda47__gasync_ready_callback (GObject* source_object,
                                         GAsyncResult* res,
                                         gpointer self);
static void _____lambda46__gtk_button_clicked (GtkButton* _sender,
                                        gpointer self);
static void contacts_linked_personas_dialog_finalize (GObject * obj);
static GType contacts_linked_personas_dialog_get_type_once (void);

static inline gpointer
contacts_linked_personas_dialog_get_instance_private (ContactsLinkedPersonasDialog* self)
{
	return G_STRUCT_MEMBER_P (self, ContactsLinkedPersonasDialog_private_offset);
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 32 "../src/contacts-linked-personas-dialog.vala"
	return self ? g_object_ref (self) : NULL;
#line 170 "contacts-linked-personas-dialog.c"
}

static Block21Data*
block21_data_ref (Block21Data* _data21_)
{
#line 32 "../src/contacts-linked-personas-dialog.vala"
	g_atomic_int_inc (&_data21_->_ref_count_);
#line 32 "../src/contacts-linked-personas-dialog.vala"
	return _data21_;
#line 180 "contacts-linked-personas-dialog.c"
}

static void
block21_data_unref (void * _userdata_)
{
	Block21Data* _data21_;
	_data21_ = (Block21Data*) _userdata_;
#line 32 "../src/contacts-linked-personas-dialog.vala"
	if (g_atomic_int_dec_and_test (&_data21_->_ref_count_)) {
#line 190 "contacts-linked-personas-dialog.c"
		ContactsLinkedPersonasDialog* self;
#line 32 "../src/contacts-linked-personas-dialog.vala"
		self = _data21_->self;
#line 32 "../src/contacts-linked-personas-dialog.vala"
		_g_object_unref0 (_data21_->store);
#line 32 "../src/contacts-linked-personas-dialog.vala"
		_g_object_unref0 (_data21_->individual);
#line 32 "../src/contacts-linked-personas-dialog.vala"
		_g_object_unref0 (self);
#line 32 "../src/contacts-linked-personas-dialog.vala"
		g_slice_free (Block21Data, _data21_);
#line 202 "contacts-linked-personas-dialog.c"
	}
}

static void
_contacts_add_separator_gtk_list_box_update_header_func (GtkListBoxRow* row,
                                                         GtkListBoxRow* before,
                                                         gpointer self)
{
#line 40 "../src/contacts-linked-personas-dialog.vala"
	contacts_add_separator (row, before);
#line 213 "contacts-linked-personas-dialog.c"
}

static Block22Data*
block22_data_ref (Block22Data* _data22_)
{
#line 45 "../src/contacts-linked-personas-dialog.vala"
	g_atomic_int_inc (&_data22_->_ref_count_);
#line 45 "../src/contacts-linked-personas-dialog.vala"
	return _data22_;
#line 223 "contacts-linked-personas-dialog.c"
}

static void
block22_data_unref (void * _userdata_)
{
	Block22Data* _data22_;
	_data22_ = (Block22Data*) _userdata_;
#line 45 "../src/contacts-linked-personas-dialog.vala"
	if (g_atomic_int_dec_and_test (&_data22_->_ref_count_)) {
#line 233 "contacts-linked-personas-dialog.c"
		ContactsLinkedPersonasDialog* self;
#line 45 "../src/contacts-linked-personas-dialog.vala"
		self = _data22_->_data21_->self;
#line 45 "../src/contacts-linked-personas-dialog.vala"
		_g_object_unref0 (_data22_->row_grid);
#line 45 "../src/contacts-linked-personas-dialog.vala"
		_g_object_unref0 (_data22_->p);
#line 45 "../src/contacts-linked-personas-dialog.vala"
		block21_data_unref (_data22_->_data21_);
#line 45 "../src/contacts-linked-personas-dialog.vala"
		_data22_->_data21_ = NULL;
#line 45 "../src/contacts-linked-personas-dialog.vala"
		g_slice_free (Block22Data, _data22_);
#line 247 "contacts-linked-personas-dialog.c"
	}
}

static void
__lambda47_ (Block22Data* _data22_,
             GObject* obj,
             GAsyncResult* _result_)
{
	Block21Data* _data21_;
	ContactsLinkedPersonasDialog* self;
	ContactsLinkOperation* _tmp0_;
	ContactsLinkOperation* _tmp1_;
	GtkGrid* _tmp2_;
#line 82 "../src/contacts-linked-personas-dialog.vala"
	_data21_ = _data22_->_data21_;
#line 82 "../src/contacts-linked-personas-dialog.vala"
	self = _data21_->self;
#line 82 "../src/contacts-linked-personas-dialog.vala"
	g_return_if_fail (_result_ != NULL);
#line 83 "../src/contacts-linked-personas-dialog.vala"
	_tmp0_ = contacts_unlink_persona_finish (_result_);
#line 83 "../src/contacts-linked-personas-dialog.vala"
	_tmp1_ = _tmp0_;
#line 83 "../src/contacts-linked-personas-dialog.vala"
	_g_object_unref0 (_tmp1_);
#line 85 "../src/contacts-linked-personas-dialog.vala"
	_tmp2_ = _data22_->row_grid;
#line 85 "../src/contacts-linked-personas-dialog.vala"
	gtk_widget_destroy ((GtkWidget*) _tmp2_);
#line 87 "../src/contacts-linked-personas-dialog.vala"
	self->any_unlinked = TRUE;
#line 279 "contacts-linked-personas-dialog.c"
}

static void
___lambda47__gasync_ready_callback (GObject* source_object,
                                    GAsyncResult* res,
                                    gpointer self)
{
#line 82 "../src/contacts-linked-personas-dialog.vala"
	__lambda47_ (self, source_object, res);
#line 82 "../src/contacts-linked-personas-dialog.vala"
	block22_data_unref (self);
#line 291 "contacts-linked-personas-dialog.c"
}

static void
____lambda46_ (Block22Data* _data22_)
{
	Block21Data* _data21_;
	ContactsLinkedPersonasDialog* self;
	FolksPersona* _tmp0_;
#line 81 "../src/contacts-linked-personas-dialog.vala"
	_data21_ = _data22_->_data21_;
#line 81 "../src/contacts-linked-personas-dialog.vala"
	self = _data21_->self;
#line 82 "../src/contacts-linked-personas-dialog.vala"
	_tmp0_ = _data22_->p;
#line 82 "../src/contacts-linked-personas-dialog.vala"
	contacts_unlink_persona (_data21_->store, _data21_->individual, _tmp0_, ___lambda47__gasync_ready_callback, block22_data_ref (_data22_));
#line 308 "contacts-linked-personas-dialog.c"
}

static void
_____lambda46__gtk_button_clicked (GtkButton* _sender,
                                   gpointer self)
{
#line 81 "../src/contacts-linked-personas-dialog.vala"
	____lambda46_ (self);
#line 317 "contacts-linked-personas-dialog.c"
}

ContactsLinkedPersonasDialog*
contacts_linked_personas_dialog_construct (GType object_type,
                                           ContactsWindow* main_win,
                                           ContactsStore* store,
                                           FolksIndividual* individual)
{
	ContactsLinkedPersonasDialog * self = NULL;
	Block21Data* _data21_;
	ContactsStore* _tmp0_;
	FolksIndividual* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	FolksIndividual* _tmp4_;
	GtkListBox* _tmp5_;
	GeeList* personas = NULL;
	GeeList* _tmp6_;
	gboolean is_first = FALSE;
#line 32 "../src/contacts-linked-personas-dialog.vala"
	g_return_val_if_fail (main_win != NULL, NULL);
#line 32 "../src/contacts-linked-personas-dialog.vala"
	g_return_val_if_fail (store != NULL, NULL);
#line 32 "../src/contacts-linked-personas-dialog.vala"
	g_return_val_if_fail (individual != NULL, NULL);
#line 32 "../src/contacts-linked-personas-dialog.vala"
	_data21_ = g_slice_new0 (Block21Data);
#line 32 "../src/contacts-linked-personas-dialog.vala"
	_data21_->_ref_count_ = 1;
#line 32 "../src/contacts-linked-personas-dialog.vala"
	_tmp0_ = _g_object_ref0 (store);
#line 32 "../src/contacts-linked-personas-dialog.vala"
	_g_object_unref0 (_data21_->store);
#line 32 "../src/contacts-linked-personas-dialog.vala"
	_data21_->store = _tmp0_;
#line 32 "../src/contacts-linked-personas-dialog.vala"
	_tmp1_ = _g_object_ref0 (individual);
#line 32 "../src/contacts-linked-personas-dialog.vala"
	_g_object_unref0 (_data21_->individual);
#line 32 "../src/contacts-linked-personas-dialog.vala"
	_data21_->individual = _tmp1_;
#line 33 "../src/contacts-linked-personas-dialog.vala"
	_tmp2_ = folks_individual_get_display_name (_data21_->individual);
#line 33 "../src/contacts-linked-personas-dialog.vala"
	_tmp3_ = _tmp2_;
#line 33 "../src/contacts-linked-personas-dialog.vala"
	self = (ContactsLinkedPersonasDialog*) g_object_new (object_type, "use-header-bar", 1, "transient-for", main_win, "title", _tmp3_, NULL);
#line 33 "../src/contacts-linked-personas-dialog.vala"
	_data21_->self = g_object_ref (self);
#line 39 "../src/contacts-linked-personas-dialog.vala"
	_tmp4_ = _g_object_ref0 (_data21_->individual);
#line 39 "../src/contacts-linked-personas-dialog.vala"
	_g_object_unref0 (self->priv->individual);
#line 39 "../src/contacts-linked-personas-dialog.vala"
	self->priv->individual = _tmp4_;
#line 40 "../src/contacts-linked-personas-dialog.vala"
	_tmp5_ = self->priv->linked_accounts_view;
#line 40 "../src/contacts-linked-personas-dialog.vala"
	gtk_list_box_set_header_func (_tmp5_, _contacts_add_separator_gtk_list_box_update_header_func, NULL, NULL);
#line 43 "../src/contacts-linked-personas-dialog.vala"
	_tmp6_ = contacts_utils_get_personas_for_display (_data21_->individual);
#line 43 "../src/contacts-linked-personas-dialog.vala"
	personas = _tmp6_;
#line 44 "../src/contacts-linked-personas-dialog.vala"
	is_first = TRUE;
#line 383 "contacts-linked-personas-dialog.c"
	{
		GeeList* _p_list = NULL;
		GeeList* _tmp7_;
		GeeList* _tmp8_;
		gint _p_size = 0;
		GeeList* _tmp9_;
		gint _tmp10_;
		gint _tmp11_;
		gint _p_index = 0;
#line 45 "../src/contacts-linked-personas-dialog.vala"
		_tmp7_ = personas;
#line 45 "../src/contacts-linked-personas-dialog.vala"
		_tmp8_ = _g_object_ref0 (_tmp7_);
#line 45 "../src/contacts-linked-personas-dialog.vala"
		_p_list = _tmp8_;
#line 45 "../src/contacts-linked-personas-dialog.vala"
		_tmp9_ = _p_list;
#line 45 "../src/contacts-linked-personas-dialog.vala"
		_tmp10_ = gee_collection_get_size ((GeeCollection*) _tmp9_);
#line 45 "../src/contacts-linked-personas-dialog.vala"
		_tmp11_ = _tmp10_;
#line 45 "../src/contacts-linked-personas-dialog.vala"
		_p_size = _tmp11_;
#line 45 "../src/contacts-linked-personas-dialog.vala"
		_p_index = -1;
#line 45 "../src/contacts-linked-personas-dialog.vala"
		while (TRUE) {
#line 411 "contacts-linked-personas-dialog.c"
			Block22Data* _data22_;
			GeeList* _tmp12_;
			gpointer _tmp13_;
			GtkGrid* _tmp14_;
			ContactsAvatar* image_frame = NULL;
			ContactsAvatar* _tmp15_;
			ContactsAvatar* _tmp16_;
			ContactsAvatar* _tmp17_;
			ContactsAvatar* _tmp18_;
			GtkGrid* _tmp19_;
			ContactsAvatar* _tmp20_;
			GtkLabel* display_name = NULL;
			GtkLabel* _tmp21_;
			GtkLabel* _tmp22_;
			GtkLabel* _tmp23_;
			GtkLabel* _tmp24_;
			GtkLabel* _tmp25_;
			FolksPersona* _tmp26_;
			const gchar* _tmp27_;
			const gchar* _tmp28_;
			gchar* _tmp29_;
			gchar* _tmp30_;
			GtkGrid* _tmp31_;
			GtkLabel* _tmp32_;
			GtkLabel* store_name = NULL;
			FolksPersona* _tmp33_;
			gchar* _tmp34_;
			gchar* _tmp35_;
			GtkLabel* _tmp36_;
			GtkLabel* _tmp37_;
			GtkLabel* _tmp38_;
			GtkLabel* _tmp39_;
			GtkLabel* _tmp40_;
			GtkLabel* _tmp41_;
			GtkStyleContext* _tmp42_;
			GtkGrid* _tmp43_;
			GtkLabel* _tmp44_;
			GtkButton* button = NULL;
			GtkButton* _tmp45_;
			GtkButton* _tmp46_;
			GtkButton* _tmp47_;
			GtkButton* _tmp48_;
			GtkWidget* _tmp49_;
			GtkGrid* _tmp50_;
			GtkButton* _tmp51_;
			GtkButton* _tmp52_;
			GtkGrid* _tmp53_;
			GtkListBox* _tmp54_;
			GtkGrid* _tmp55_;
#line 45 "../src/contacts-linked-personas-dialog.vala"
			_data22_ = g_slice_new0 (Block22Data);
#line 45 "../src/contacts-linked-personas-dialog.vala"
			_data22_->_ref_count_ = 1;
#line 45 "../src/contacts-linked-personas-dialog.vala"
			_data22_->_data21_ = block21_data_ref (_data21_);
#line 45 "../src/contacts-linked-personas-dialog.vala"
			_p_index = _p_index + 1;
#line 45 "../src/contacts-linked-personas-dialog.vala"
			if (!(_p_index < _p_size)) {
#line 45 "../src/contacts-linked-personas-dialog.vala"
				block22_data_unref (_data22_);
#line 45 "../src/contacts-linked-personas-dialog.vala"
				_data22_ = NULL;
#line 45 "../src/contacts-linked-personas-dialog.vala"
				break;
#line 477 "contacts-linked-personas-dialog.c"
			}
#line 45 "../src/contacts-linked-personas-dialog.vala"
			_tmp12_ = _p_list;
#line 45 "../src/contacts-linked-personas-dialog.vala"
			_tmp13_ = gee_list_get (_tmp12_, _p_index);
#line 45 "../src/contacts-linked-personas-dialog.vala"
			_data22_->p = (FolksPersona*) _tmp13_;
#line 46 "../src/contacts-linked-personas-dialog.vala"
			if (is_first) {
#line 47 "../src/contacts-linked-personas-dialog.vala"
				is_first = FALSE;
#line 48 "../src/contacts-linked-personas-dialog.vala"
				block22_data_unref (_data22_);
#line 48 "../src/contacts-linked-personas-dialog.vala"
				_data22_ = NULL;
#line 48 "../src/contacts-linked-personas-dialog.vala"
				continue;
#line 495 "contacts-linked-personas-dialog.c"
			}
#line 51 "../src/contacts-linked-personas-dialog.vala"
			_tmp14_ = (GtkGrid*) gtk_grid_new ();
#line 51 "../src/contacts-linked-personas-dialog.vala"
			g_object_ref_sink (_tmp14_);
#line 51 "../src/contacts-linked-personas-dialog.vala"
			_data22_->row_grid = _tmp14_;
#line 53 "../src/contacts-linked-personas-dialog.vala"
			_tmp15_ = contacts_avatar_new (CONTACTS_LINKED_PERSONAS_DIALOG_AVATAR_SIZE, _data21_->individual);
#line 53 "../src/contacts-linked-personas-dialog.vala"
			g_object_ref_sink (_tmp15_);
#line 53 "../src/contacts-linked-personas-dialog.vala"
			image_frame = _tmp15_;
#line 54 "../src/contacts-linked-personas-dialog.vala"
			_tmp16_ = image_frame;
#line 54 "../src/contacts-linked-personas-dialog.vala"
			gtk_widget_set_hexpand ((GtkWidget*) _tmp16_, FALSE);
#line 55 "../src/contacts-linked-personas-dialog.vala"
			_tmp17_ = image_frame;
#line 55 "../src/contacts-linked-personas-dialog.vala"
			g_object_set ((GtkWidget*) _tmp17_, "margin", 6, NULL);
#line 56 "../src/contacts-linked-personas-dialog.vala"
			_tmp18_ = image_frame;
#line 56 "../src/contacts-linked-personas-dialog.vala"
			gtk_widget_set_margin_end ((GtkWidget*) _tmp18_, 12);
#line 57 "../src/contacts-linked-personas-dialog.vala"
			_tmp19_ = _data22_->row_grid;
#line 57 "../src/contacts-linked-personas-dialog.vala"
			_tmp20_ = image_frame;
#line 57 "../src/contacts-linked-personas-dialog.vala"
			gtk_grid_attach (_tmp19_, (GtkWidget*) _tmp20_, 0, 0, 1, 2);
#line 59 "../src/contacts-linked-personas-dialog.vala"
			_tmp21_ = (GtkLabel*) gtk_label_new ("");
#line 59 "../src/contacts-linked-personas-dialog.vala"
			g_object_ref_sink (_tmp21_);
#line 59 "../src/contacts-linked-personas-dialog.vala"
			display_name = _tmp21_;
#line 60 "../src/contacts-linked-personas-dialog.vala"
			_tmp22_ = display_name;
#line 60 "../src/contacts-linked-personas-dialog.vala"
			gtk_widget_set_halign ((GtkWidget*) _tmp22_, GTK_ALIGN_START);
#line 61 "../src/contacts-linked-personas-dialog.vala"
			_tmp23_ = display_name;
#line 61 "../src/contacts-linked-personas-dialog.vala"
			gtk_widget_set_valign ((GtkWidget*) _tmp23_, GTK_ALIGN_END);
#line 62 "../src/contacts-linked-personas-dialog.vala"
			_tmp24_ = display_name;
#line 62 "../src/contacts-linked-personas-dialog.vala"
			gtk_widget_set_hexpand ((GtkWidget*) _tmp24_, TRUE);
#line 63 "../src/contacts-linked-personas-dialog.vala"
			_tmp25_ = display_name;
#line 63 "../src/contacts-linked-personas-dialog.vala"
			_tmp26_ = _data22_->p;
#line 63 "../src/contacts-linked-personas-dialog.vala"
			_tmp27_ = folks_persona_get_display_id (_tmp26_);
#line 63 "../src/contacts-linked-personas-dialog.vala"
			_tmp28_ = _tmp27_;
#line 63 "../src/contacts-linked-personas-dialog.vala"
			_tmp29_ = g_markup_printf_escaped ("<span font='bold'>%s</span>", _tmp28_);
#line 63 "../src/contacts-linked-personas-dialog.vala"
			_tmp30_ = _tmp29_;
#line 63 "../src/contacts-linked-personas-dialog.vala"
			gtk_label_set_markup (_tmp25_, _tmp30_);
#line 63 "../src/contacts-linked-personas-dialog.vala"
			_g_free0 (_tmp30_);
#line 65 "../src/contacts-linked-personas-dialog.vala"
			_tmp31_ = _data22_->row_grid;
#line 65 "../src/contacts-linked-personas-dialog.vala"
			_tmp32_ = display_name;
#line 65 "../src/contacts-linked-personas-dialog.vala"
			gtk_grid_attach (_tmp31_, (GtkWidget*) _tmp32_, 1, 0, 1, 1);
#line 67 "../src/contacts-linked-personas-dialog.vala"
			_tmp33_ = _data22_->p;
#line 67 "../src/contacts-linked-personas-dialog.vala"
			_tmp34_ = contacts_utils_format_persona_store_name_for_contact (_tmp33_);
#line 67 "../src/contacts-linked-personas-dialog.vala"
			_tmp35_ = _tmp34_;
#line 67 "../src/contacts-linked-personas-dialog.vala"
			_tmp36_ = (GtkLabel*) gtk_label_new (_tmp35_);
#line 67 "../src/contacts-linked-personas-dialog.vala"
			g_object_ref_sink (_tmp36_);
#line 67 "../src/contacts-linked-personas-dialog.vala"
			_tmp37_ = _tmp36_;
#line 67 "../src/contacts-linked-personas-dialog.vala"
			_g_free0 (_tmp35_);
#line 67 "../src/contacts-linked-personas-dialog.vala"
			store_name = _tmp37_;
#line 68 "../src/contacts-linked-personas-dialog.vala"
			_tmp38_ = store_name;
#line 68 "../src/contacts-linked-personas-dialog.vala"
			gtk_widget_set_halign ((GtkWidget*) _tmp38_, GTK_ALIGN_START);
#line 69 "../src/contacts-linked-personas-dialog.vala"
			_tmp39_ = store_name;
#line 69 "../src/contacts-linked-personas-dialog.vala"
			gtk_widget_set_valign ((GtkWidget*) _tmp39_, GTK_ALIGN_START);
#line 70 "../src/contacts-linked-personas-dialog.vala"
			_tmp40_ = store_name;
#line 70 "../src/contacts-linked-personas-dialog.vala"
			gtk_widget_set_hexpand ((GtkWidget*) _tmp40_, TRUE);
#line 71 "../src/contacts-linked-personas-dialog.vala"
			_tmp41_ = store_name;
#line 71 "../src/contacts-linked-personas-dialog.vala"
			_tmp42_ = gtk_widget_get_style_context ((GtkWidget*) _tmp41_);
#line 71 "../src/contacts-linked-personas-dialog.vala"
			gtk_style_context_add_class (_tmp42_, "dim-label");
#line 72 "../src/contacts-linked-personas-dialog.vala"
			_tmp43_ = _data22_->row_grid;
#line 72 "../src/contacts-linked-personas-dialog.vala"
			_tmp44_ = store_name;
#line 72 "../src/contacts-linked-personas-dialog.vala"
			gtk_grid_attach (_tmp43_, (GtkWidget*) _tmp44_, 1, 1, 1, 1);
#line 74 "../src/contacts-linked-personas-dialog.vala"
			_tmp45_ = (GtkButton*) gtk_button_new_with_label (_ ("Unlink"));
#line 74 "../src/contacts-linked-personas-dialog.vala"
			g_object_ref_sink (_tmp45_);
#line 74 "../src/contacts-linked-personas-dialog.vala"
			button = _tmp45_;
#line 75 "../src/contacts-linked-personas-dialog.vala"
			_tmp46_ = button;
#line 75 "../src/contacts-linked-personas-dialog.vala"
			gtk_widget_set_margin_end ((GtkWidget*) _tmp46_, 6);
#line 76 "../src/contacts-linked-personas-dialog.vala"
			_tmp47_ = button;
#line 76 "../src/contacts-linked-personas-dialog.vala"
			gtk_widget_set_valign ((GtkWidget*) _tmp47_, GTK_ALIGN_CENTER);
#line 77 "../src/contacts-linked-personas-dialog.vala"
			_tmp48_ = button;
#line 77 "../src/contacts-linked-personas-dialog.vala"
			_tmp49_ = gtk_bin_get_child ((GtkBin*) _tmp48_);
#line 77 "../src/contacts-linked-personas-dialog.vala"
			g_object_set (_tmp49_, "margin", 1, NULL);
#line 78 "../src/contacts-linked-personas-dialog.vala"
			_tmp50_ = _data22_->row_grid;
#line 78 "../src/contacts-linked-personas-dialog.vala"
			_tmp51_ = button;
#line 78 "../src/contacts-linked-personas-dialog.vala"
			gtk_grid_attach (_tmp50_, (GtkWidget*) _tmp51_, 2, 0, 1, 2);
#line 81 "../src/contacts-linked-personas-dialog.vala"
			_tmp52_ = button;
#line 81 "../src/contacts-linked-personas-dialog.vala"
			g_signal_connect_data (_tmp52_, "clicked", (GCallback) _____lambda46__gtk_button_clicked, block22_data_ref (_data22_), (GClosureNotify) block22_data_unref, 0);
#line 93 "../src/contacts-linked-personas-dialog.vala"
			_tmp53_ = _data22_->row_grid;
#line 93 "../src/contacts-linked-personas-dialog.vala"
			gtk_widget_show_all ((GtkWidget*) _tmp53_);
#line 94 "../src/contacts-linked-personas-dialog.vala"
			_tmp54_ = self->priv->linked_accounts_view;
#line 94 "../src/contacts-linked-personas-dialog.vala"
			_tmp55_ = _data22_->row_grid;
#line 94 "../src/contacts-linked-personas-dialog.vala"
			gtk_container_add ((GtkContainer*) _tmp54_, (GtkWidget*) _tmp55_);
#line 45 "../src/contacts-linked-personas-dialog.vala"
			_g_object_unref0 (button);
#line 45 "../src/contacts-linked-personas-dialog.vala"
			_g_object_unref0 (store_name);
#line 45 "../src/contacts-linked-personas-dialog.vala"
			_g_object_unref0 (display_name);
#line 45 "../src/contacts-linked-personas-dialog.vala"
			_g_object_unref0 (image_frame);
#line 45 "../src/contacts-linked-personas-dialog.vala"
			block22_data_unref (_data22_);
#line 45 "../src/contacts-linked-personas-dialog.vala"
			_data22_ = NULL;
#line 659 "contacts-linked-personas-dialog.c"
		}
#line 45 "../src/contacts-linked-personas-dialog.vala"
		_g_object_unref0 (_p_list);
#line 663 "contacts-linked-personas-dialog.c"
	}
#line 32 "../src/contacts-linked-personas-dialog.vala"
	_g_object_unref0 (personas);
#line 32 "../src/contacts-linked-personas-dialog.vala"
	block21_data_unref (_data21_);
#line 32 "../src/contacts-linked-personas-dialog.vala"
	_data21_ = NULL;
#line 32 "../src/contacts-linked-personas-dialog.vala"
	return self;
#line 673 "contacts-linked-personas-dialog.c"
}

ContactsLinkedPersonasDialog*
contacts_linked_personas_dialog_new (ContactsWindow* main_win,
                                     ContactsStore* store,
                                     FolksIndividual* individual)
{
#line 32 "../src/contacts-linked-personas-dialog.vala"
	return contacts_linked_personas_dialog_construct (CONTACTS_TYPE_LINKED_PERSONAS_DIALOG, main_win, store, individual);
#line 683 "contacts-linked-personas-dialog.c"
}

static void
contacts_linked_personas_dialog_class_init (ContactsLinkedPersonasDialogClass * klass,
                                            gpointer klass_data)
{
#line 22 "../src/contacts-linked-personas-dialog.vala"
	contacts_linked_personas_dialog_parent_class = g_type_class_peek_parent (klass);
#line 22 "../src/contacts-linked-personas-dialog.vala"
	g_type_class_adjust_private_offset (klass, &ContactsLinkedPersonasDialog_private_offset);
#line 22 "../src/contacts-linked-personas-dialog.vala"
	G_OBJECT_CLASS (klass)->finalize = contacts_linked_personas_dialog_finalize;
#line 22 "../src/contacts-linked-personas-dialog.vala"
	gtk_widget_class_set_template_from_resource (GTK_WIDGET_CLASS (klass), "/org/gnome/Contacts/ui/contacts-linked-personas-dialog.ui");
#line 22 "../src/contacts-linked-personas-dialog.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "linked_accounts_view", FALSE, ContactsLinkedPersonasDialog_private_offset + G_STRUCT_OFFSET (ContactsLinkedPersonasDialogPrivate, linked_accounts_view));
#line 700 "contacts-linked-personas-dialog.c"
}

static void
contacts_linked_personas_dialog_instance_init (ContactsLinkedPersonasDialog * self,
                                               gpointer klass)
{
#line 22 "../src/contacts-linked-personas-dialog.vala"
	self->priv = contacts_linked_personas_dialog_get_instance_private (self);
#line 30 "../src/contacts-linked-personas-dialog.vala"
	self->any_unlinked = FALSE;
#line 22 "../src/contacts-linked-personas-dialog.vala"
	gtk_widget_init_template (GTK_WIDGET (self));
#line 713 "contacts-linked-personas-dialog.c"
}

static void
contacts_linked_personas_dialog_finalize (GObject * obj)
{
	ContactsLinkedPersonasDialog * self;
#line 22 "../src/contacts-linked-personas-dialog.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, CONTACTS_TYPE_LINKED_PERSONAS_DIALOG, ContactsLinkedPersonasDialog);
#line 26 "../src/contacts-linked-personas-dialog.vala"
	_g_object_unref0 (self->priv->linked_accounts_view);
#line 28 "../src/contacts-linked-personas-dialog.vala"
	_g_object_unref0 (self->priv->individual);
#line 22 "../src/contacts-linked-personas-dialog.vala"
	G_OBJECT_CLASS (contacts_linked_personas_dialog_parent_class)->finalize (obj);
#line 728 "contacts-linked-personas-dialog.c"
}

static GType
contacts_linked_personas_dialog_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ContactsLinkedPersonasDialogClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) contacts_linked_personas_dialog_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ContactsLinkedPersonasDialog), 0, (GInstanceInitFunc) contacts_linked_personas_dialog_instance_init, NULL };
	GType contacts_linked_personas_dialog_type_id;
	contacts_linked_personas_dialog_type_id = g_type_register_static (gtk_dialog_get_type (), "ContactsLinkedPersonasDialog", &g_define_type_info, 0);
	ContactsLinkedPersonasDialog_private_offset = g_type_add_instance_private (contacts_linked_personas_dialog_type_id, sizeof (ContactsLinkedPersonasDialogPrivate));
	return contacts_linked_personas_dialog_type_id;
}

GType
contacts_linked_personas_dialog_get_type (void)
{
	static volatile gsize contacts_linked_personas_dialog_type_id__volatile = 0;
	if (g_once_init_enter (&contacts_linked_personas_dialog_type_id__volatile)) {
		GType contacts_linked_personas_dialog_type_id;
		contacts_linked_personas_dialog_type_id = contacts_linked_personas_dialog_get_type_once ();
		g_once_init_leave (&contacts_linked_personas_dialog_type_id__volatile, contacts_linked_personas_dialog_type_id);
	}
	return contacts_linked_personas_dialog_type_id__volatile;
}

