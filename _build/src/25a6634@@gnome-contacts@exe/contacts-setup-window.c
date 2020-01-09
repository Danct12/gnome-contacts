/* contacts-setup-window.c generated by valac 0.47.2.1-ce69, the Vala compiler
 * generated from contacts-setup-window.vala, do not modify */

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
#include <handy.h>
#include "contacts.h"
#include <glib.h>
#include <folks/folks.h>
#include <folks/folks-eds.h>
#include <config.h>

#define CONTACTS_TYPE_SETUP_WINDOW (contacts_setup_window_get_type ())
#define CONTACTS_SETUP_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CONTACTS_TYPE_SETUP_WINDOW, ContactsSetupWindow))
#define CONTACTS_SETUP_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CONTACTS_TYPE_SETUP_WINDOW, ContactsSetupWindowClass))
#define CONTACTS_IS_SETUP_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CONTACTS_TYPE_SETUP_WINDOW))
#define CONTACTS_IS_SETUP_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CONTACTS_TYPE_SETUP_WINDOW))
#define CONTACTS_SETUP_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CONTACTS_TYPE_SETUP_WINDOW, ContactsSetupWindowClass))

typedef struct _ContactsSetupWindow ContactsSetupWindow;
typedef struct _ContactsSetupWindowClass ContactsSetupWindowClass;
typedef struct _ContactsSetupWindowPrivate ContactsSetupWindowPrivate;

#define CONTACTS_TYPE_ACCOUNTS_LIST (contacts_accounts_list_get_type ())
#define CONTACTS_ACCOUNTS_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CONTACTS_TYPE_ACCOUNTS_LIST, ContactsAccountsList))
#define CONTACTS_ACCOUNTS_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CONTACTS_TYPE_ACCOUNTS_LIST, ContactsAccountsListClass))
#define CONTACTS_IS_ACCOUNTS_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CONTACTS_TYPE_ACCOUNTS_LIST))
#define CONTACTS_IS_ACCOUNTS_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CONTACTS_TYPE_ACCOUNTS_LIST))
#define CONTACTS_ACCOUNTS_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CONTACTS_TYPE_ACCOUNTS_LIST, ContactsAccountsListClass))

typedef struct _ContactsAccountsList ContactsAccountsList;
typedef struct _ContactsAccountsListClass ContactsAccountsListClass;
enum  {
	CONTACTS_SETUP_WINDOW_0_PROPERTY,
	CONTACTS_SETUP_WINDOW_NUM_PROPERTIES
};
static GParamSpec* contacts_setup_window_properties[CONTACTS_SETUP_WINDOW_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define CONTACTS_TYPE_APP (contacts_app_get_type ())
#define CONTACTS_APP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CONTACTS_TYPE_APP, ContactsApp))
#define CONTACTS_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CONTACTS_TYPE_APP, ContactsAppClass))
#define CONTACTS_IS_APP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CONTACTS_TYPE_APP))
#define CONTACTS_IS_APP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CONTACTS_TYPE_APP))
#define CONTACTS_APP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CONTACTS_TYPE_APP, ContactsAppClass))

typedef struct _ContactsApp ContactsApp;
typedef struct _ContactsAppClass ContactsAppClass;
typedef struct _Block23Data Block23Data;
typedef struct _ContactsAccountsListPrivate ContactsAccountsListPrivate;
enum  {
	CONTACTS_SETUP_WINDOW_SETUP_DONE_SIGNAL,
	CONTACTS_SETUP_WINDOW_NUM_SIGNALS
};
static guint contacts_setup_window_signals[CONTACTS_SETUP_WINDOW_NUM_SIGNALS] = {0};

struct _ContactsSetupWindow {
	GtkApplicationWindow parent_instance;
	ContactsSetupWindowPrivate * priv;
};

struct _ContactsSetupWindowClass {
	GtkApplicationWindowClass parent_class;
};

struct _ContactsSetupWindowPrivate {
	HdyColumn* content;
	GtkButton* setup_done_button;
	ContactsAccountsList* setup_accounts_list;
};

struct _Block23Data {
	int _ref_count_;
	ContactsSetupWindow* self;
	gulong id2;
};

struct _ContactsAccountsList {
	GtkListBox parent_instance;
	ContactsAccountsListPrivate * priv;
	FolksPersonaStore* selected_store;
};

struct _ContactsAccountsListClass {
	GtkListBoxClass parent_class;
};

static gint ContactsSetupWindow_private_offset;
static gpointer contacts_setup_window_parent_class = NULL;

GType contacts_setup_window_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ContactsSetupWindow, g_object_unref)
GType contacts_accounts_list_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ContactsAccountsList, g_object_unref)
GType contacts_app_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (ContactsApp, g_object_unref)
ContactsSetupWindow* contacts_setup_window_new (ContactsApp* app,
                                                ContactsStore* store);
ContactsSetupWindow* contacts_setup_window_construct (GType object_type,
                                                      ContactsApp* app,
                                                      ContactsStore* store);
static Block23Data* block23_data_ref (Block23Data* _data23_);
static void block23_data_unref (void * _userdata_);
ContactsAccountsList* contacts_accounts_list_new (ContactsStore* contacts_store);
ContactsAccountsList* contacts_accounts_list_construct (GType object_type,
                                                        ContactsStore* contacts_store);
static void __lambda69_ (ContactsSetupWindow* self);
void contacts_accounts_list_update_contents (ContactsAccountsList* self,
                                             gboolean select_active);
static void ___lambda69__folks_backend_store_backend_available (FolksBackendStore* _sender,
                                                         FolksBackend* backend,
                                                         gpointer self);
static void __lambda70_ (Block23Data* _data23_);
static void ___lambda70__contacts_accounts_list_account_selected (ContactsAccountsList* _sender,
                                                           gpointer self);
static void contacts_setup_window_fill_accounts_list (ContactsSetupWindow* self,
                                               ContactsStore* store);
static void __lambda72_ (ContactsSetupWindow* self);
static void ___lambda72__gtk_button_clicked (GtkButton* _sender,
                                      gpointer self);
static void __lambda71_ (ContactsSetupWindow* self);
static void ___lambda71__contacts_store_prepared (ContactsStore* _sender,
                                           gpointer self);
static void contacts_setup_window_finalize (GObject * obj);
static GType contacts_setup_window_get_type_once (void);

static inline gpointer
contacts_setup_window_get_instance_private (ContactsSetupWindow* self)
{
	return G_STRUCT_MEMBER_P (self, ContactsSetupWindow_private_offset);
}

static Block23Data*
block23_data_ref (Block23Data* _data23_)
{
#line 38 "../src/contacts-setup-window.vala"
	g_atomic_int_inc (&_data23_->_ref_count_);
#line 38 "../src/contacts-setup-window.vala"
	return _data23_;
#line 158 "contacts-setup-window.c"
}

static void
block23_data_unref (void * _userdata_)
{
	Block23Data* _data23_;
	_data23_ = (Block23Data*) _userdata_;
#line 38 "../src/contacts-setup-window.vala"
	if (g_atomic_int_dec_and_test (&_data23_->_ref_count_)) {
#line 168 "contacts-setup-window.c"
		ContactsSetupWindow* self;
#line 38 "../src/contacts-setup-window.vala"
		self = _data23_->self;
#line 38 "../src/contacts-setup-window.vala"
		_g_object_unref0 (self);
#line 38 "../src/contacts-setup-window.vala"
		g_slice_free (Block23Data, _data23_);
#line 176 "contacts-setup-window.c"
	}
}

static void
__lambda69_ (ContactsSetupWindow* self)
{
	ContactsAccountsList* _tmp0_;
#line 47 "../src/contacts-setup-window.vala"
	_tmp0_ = self->priv->setup_accounts_list;
#line 47 "../src/contacts-setup-window.vala"
	contacts_accounts_list_update_contents (_tmp0_, FALSE);
#line 188 "contacts-setup-window.c"
}

static void
___lambda69__folks_backend_store_backend_available (FolksBackendStore* _sender,
                                                    FolksBackend* backend,
                                                    gpointer self)
{
#line 46 "../src/contacts-setup-window.vala"
	__lambda69_ ((ContactsSetupWindow*) self);
#line 198 "contacts-setup-window.c"
}

static void
__lambda70_ (Block23Data* _data23_)
{
	ContactsSetupWindow* self;
	GtkButton* _tmp0_;
	ContactsAccountsList* _tmp1_;
#line 51 "../src/contacts-setup-window.vala"
	self = _data23_->self;
#line 52 "../src/contacts-setup-window.vala"
	_tmp0_ = self->priv->setup_done_button;
#line 52 "../src/contacts-setup-window.vala"
	gtk_widget_set_sensitive ((GtkWidget*) _tmp0_, TRUE);
#line 53 "../src/contacts-setup-window.vala"
	_tmp1_ = self->priv->setup_accounts_list;
#line 53 "../src/contacts-setup-window.vala"
	g_signal_handler_disconnect ((GObject*) _tmp1_, _data23_->id2);
#line 217 "contacts-setup-window.c"
}

static void
___lambda70__contacts_accounts_list_account_selected (ContactsAccountsList* _sender,
                                                      gpointer self)
{
#line 51 "../src/contacts-setup-window.vala"
	__lambda70_ (self);
#line 226 "contacts-setup-window.c"
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 59 "../src/contacts-setup-window.vala"
	return self ? g_object_ref (self) : NULL;
#line 234 "contacts-setup-window.c"
}

static void
__lambda72_ (ContactsSetupWindow* self)
{
	EdsfPersonaStore* selected_store = NULL;
	ContactsAccountsList* _tmp0_;
	FolksPersonaStore* _tmp1_;
	EdsfPersonaStore* _tmp2_;
#line 59 "../src/contacts-setup-window.vala"
	_tmp0_ = self->priv->setup_accounts_list;
#line 59 "../src/contacts-setup-window.vala"
	_tmp1_ = _tmp0_->selected_store;
#line 59 "../src/contacts-setup-window.vala"
	_tmp2_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, EDSF_TYPE_PERSONA_STORE) ? ((EdsfPersonaStore*) _tmp1_) : NULL);
#line 59 "../src/contacts-setup-window.vala"
	selected_store = _tmp2_;
#line 60 "../src/contacts-setup-window.vala"
	g_signal_emit (self, contacts_setup_window_signals[CONTACTS_SETUP_WINDOW_SETUP_DONE_SIGNAL], 0, selected_store);
#line 58 "../src/contacts-setup-window.vala"
	_g_object_unref0 (selected_store);
#line 256 "contacts-setup-window.c"
}

static void
___lambda72__gtk_button_clicked (GtkButton* _sender,
                                 gpointer self)
{
#line 58 "../src/contacts-setup-window.vala"
	__lambda72_ ((ContactsSetupWindow*) self);
#line 265 "contacts-setup-window.c"
}

ContactsSetupWindow*
contacts_setup_window_construct (GType object_type,
                                 ContactsApp* app,
                                 ContactsStore* store)
{
	ContactsSetupWindow * self = NULL;
	Block23Data* _data23_;
	ContactsAccountsList* _tmp0_;
	ContactsAccountsList* _tmp1_;
	ContactsAccountsList* _tmp2_;
	HdyColumn* _tmp3_;
	ContactsAccountsList* _tmp4_;
	FolksBackendStore* _tmp5_;
	FolksBackendStore* _tmp6_;
	ContactsAccountsList* _tmp7_;
	gulong _tmp8_;
	GtkButton* _tmp9_;
#line 38 "../src/contacts-setup-window.vala"
	g_return_val_if_fail (app != NULL, NULL);
#line 38 "../src/contacts-setup-window.vala"
	g_return_val_if_fail (store != NULL, NULL);
#line 38 "../src/contacts-setup-window.vala"
	_data23_ = g_slice_new0 (Block23Data);
#line 38 "../src/contacts-setup-window.vala"
	_data23_->_ref_count_ = 1;
#line 39 "../src/contacts-setup-window.vala"
	self = (ContactsSetupWindow*) g_object_new (object_type, "application", app, NULL);
#line 39 "../src/contacts-setup-window.vala"
	_data23_->self = g_object_ref (self);
#line 40 "../src/contacts-setup-window.vala"
	_tmp0_ = contacts_accounts_list_new (store);
#line 40 "../src/contacts-setup-window.vala"
	g_object_ref_sink (_tmp0_);
#line 40 "../src/contacts-setup-window.vala"
	_g_object_unref0 (self->priv->setup_accounts_list);
#line 40 "../src/contacts-setup-window.vala"
	self->priv->setup_accounts_list = _tmp0_;
#line 41 "../src/contacts-setup-window.vala"
	_tmp1_ = self->priv->setup_accounts_list;
#line 41 "../src/contacts-setup-window.vala"
	gtk_widget_set_hexpand ((GtkWidget*) _tmp1_, TRUE);
#line 42 "../src/contacts-setup-window.vala"
	_tmp2_ = self->priv->setup_accounts_list;
#line 42 "../src/contacts-setup-window.vala"
	gtk_widget_show ((GtkWidget*) _tmp2_);
#line 43 "../src/contacts-setup-window.vala"
	_tmp3_ = self->priv->content;
#line 43 "../src/contacts-setup-window.vala"
	_tmp4_ = self->priv->setup_accounts_list;
#line 43 "../src/contacts-setup-window.vala"
	gtk_container_add ((GtkContainer*) _tmp3_, (GtkWidget*) _tmp4_);
#line 46 "../src/contacts-setup-window.vala"
	_tmp5_ = contacts_store_get_backend_store (store);
#line 46 "../src/contacts-setup-window.vala"
	_tmp6_ = _tmp5_;
#line 46 "../src/contacts-setup-window.vala"
	g_signal_connect_object (_tmp6_, "backend-available", (GCallback) ___lambda69__folks_backend_store_backend_available, self, 0);
#line 50 "../src/contacts-setup-window.vala"
	_data23_->id2 = (gulong) 0;
#line 51 "../src/contacts-setup-window.vala"
	_tmp7_ = self->priv->setup_accounts_list;
#line 51 "../src/contacts-setup-window.vala"
	_tmp8_ = g_signal_connect_data (_tmp7_, "account-selected", (GCallback) ___lambda70__contacts_accounts_list_account_selected, block23_data_ref (_data23_), (GClosureNotify) block23_data_unref, 0);
#line 51 "../src/contacts-setup-window.vala"
	_data23_->id2 = _tmp8_;
#line 56 "../src/contacts-setup-window.vala"
	contacts_setup_window_fill_accounts_list (self, store);
#line 58 "../src/contacts-setup-window.vala"
	_tmp9_ = self->priv->setup_done_button;
#line 58 "../src/contacts-setup-window.vala"
	g_signal_connect_object (_tmp9_, "clicked", (GCallback) ___lambda72__gtk_button_clicked, self, 0);
#line 64 "../src/contacts-setup-window.vala"
	if (g_strcmp0 (PROFILE, "development") == 0) {
#line 341 "contacts-setup-window.c"
		GtkStyleContext* _tmp10_;
#line 65 "../src/contacts-setup-window.vala"
		_tmp10_ = gtk_widget_get_style_context ((GtkWidget*) self);
#line 65 "../src/contacts-setup-window.vala"
		gtk_style_context_add_class (_tmp10_, "devel");
#line 347 "contacts-setup-window.c"
	}
#line 38 "../src/contacts-setup-window.vala"
	block23_data_unref (_data23_);
#line 38 "../src/contacts-setup-window.vala"
	_data23_ = NULL;
#line 38 "../src/contacts-setup-window.vala"
	return self;
#line 355 "contacts-setup-window.c"
}

ContactsSetupWindow*
contacts_setup_window_new (ContactsApp* app,
                           ContactsStore* store)
{
#line 38 "../src/contacts-setup-window.vala"
	return contacts_setup_window_construct (CONTACTS_TYPE_SETUP_WINDOW, app, store);
#line 364 "contacts-setup-window.c"
}

static void
__lambda71_ (ContactsSetupWindow* self)
{
	ContactsAccountsList* _tmp0_;
#line 75 "../src/contacts-setup-window.vala"
	_tmp0_ = self->priv->setup_accounts_list;
#line 75 "../src/contacts-setup-window.vala"
	contacts_accounts_list_update_contents (_tmp0_, FALSE);
#line 375 "contacts-setup-window.c"
}

static void
___lambda71__contacts_store_prepared (ContactsStore* _sender,
                                      gpointer self)
{
#line 74 "../src/contacts-setup-window.vala"
	__lambda71_ ((ContactsSetupWindow*) self);
#line 384 "contacts-setup-window.c"
}

static void
contacts_setup_window_fill_accounts_list (ContactsSetupWindow* self,
                                          ContactsStore* store)
{
	gboolean _tmp0_;
	gboolean _tmp1_;
#line 68 "../src/contacts-setup-window.vala"
	g_return_if_fail (self != NULL);
#line 68 "../src/contacts-setup-window.vala"
	g_return_if_fail (store != NULL);
#line 69 "../src/contacts-setup-window.vala"
	_tmp0_ = contacts_store_get_is_prepared (store);
#line 69 "../src/contacts-setup-window.vala"
	_tmp1_ = _tmp0_;
#line 69 "../src/contacts-setup-window.vala"
	if (_tmp1_) {
#line 403 "contacts-setup-window.c"
		ContactsAccountsList* _tmp2_;
#line 70 "../src/contacts-setup-window.vala"
		_tmp2_ = self->priv->setup_accounts_list;
#line 70 "../src/contacts-setup-window.vala"
		contacts_accounts_list_update_contents (_tmp2_, FALSE);
#line 71 "../src/contacts-setup-window.vala"
		return;
#line 411 "contacts-setup-window.c"
	}
#line 74 "../src/contacts-setup-window.vala"
	g_signal_connect_object (store, "prepared", (GCallback) ___lambda71__contacts_store_prepared, self, 0);
#line 415 "contacts-setup-window.c"
}

static void
contacts_setup_window_class_init (ContactsSetupWindowClass * klass,
                                  gpointer klass_data)
{
#line 24 "../src/contacts-setup-window.vala"
	contacts_setup_window_parent_class = g_type_class_peek_parent (klass);
#line 24 "../src/contacts-setup-window.vala"
	g_type_class_adjust_private_offset (klass, &ContactsSetupWindow_private_offset);
#line 24 "../src/contacts-setup-window.vala"
	G_OBJECT_CLASS (klass)->finalize = contacts_setup_window_finalize;
#line 24 "../src/contacts-setup-window.vala"
	gtk_widget_class_set_template_from_resource (GTK_WIDGET_CLASS (klass), "/org/gnome/Contacts/ui/contacts-setup-window.ui");
#line 430 "contacts-setup-window.c"
	/**
	   * Fired after the user has succesfully performed the setup proess.
	   */
#line 24 "../src/contacts-setup-window.vala"
	contacts_setup_window_signals[CONTACTS_SETUP_WINDOW_SETUP_DONE_SIGNAL] = g_signal_new ("setup-done", CONTACTS_TYPE_SETUP_WINDOW, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, EDSF_TYPE_PERSONA_STORE);
#line 24 "../src/contacts-setup-window.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "content", FALSE, ContactsSetupWindow_private_offset + G_STRUCT_OFFSET (ContactsSetupWindowPrivate, content));
#line 24 "../src/contacts-setup-window.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "setup_done_button", FALSE, ContactsSetupWindow_private_offset + G_STRUCT_OFFSET (ContactsSetupWindowPrivate, setup_done_button));
#line 440 "contacts-setup-window.c"
}

static void
contacts_setup_window_instance_init (ContactsSetupWindow * self,
                                     gpointer klass)
{
#line 24 "../src/contacts-setup-window.vala"
	self->priv = contacts_setup_window_get_instance_private (self);
#line 24 "../src/contacts-setup-window.vala"
	gtk_widget_init_template (GTK_WIDGET (self));
#line 451 "contacts-setup-window.c"
}

static void
contacts_setup_window_finalize (GObject * obj)
{
	ContactsSetupWindow * self;
#line 24 "../src/contacts-setup-window.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, CONTACTS_TYPE_SETUP_WINDOW, ContactsSetupWindow);
#line 26 "../src/contacts-setup-window.vala"
	_g_object_unref0 (self->priv->content);
#line 29 "../src/contacts-setup-window.vala"
	_g_object_unref0 (self->priv->setup_done_button);
#line 31 "../src/contacts-setup-window.vala"
	_g_object_unref0 (self->priv->setup_accounts_list);
#line 24 "../src/contacts-setup-window.vala"
	G_OBJECT_CLASS (contacts_setup_window_parent_class)->finalize (obj);
#line 468 "contacts-setup-window.c"
}

static GType
contacts_setup_window_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ContactsSetupWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) contacts_setup_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ContactsSetupWindow), 0, (GInstanceInitFunc) contacts_setup_window_instance_init, NULL };
	GType contacts_setup_window_type_id;
	contacts_setup_window_type_id = g_type_register_static (gtk_application_window_get_type (), "ContactsSetupWindow", &g_define_type_info, 0);
	ContactsSetupWindow_private_offset = g_type_add_instance_private (contacts_setup_window_type_id, sizeof (ContactsSetupWindowPrivate));
	return contacts_setup_window_type_id;
}

GType
contacts_setup_window_get_type (void)
{
	static volatile gsize contacts_setup_window_type_id__volatile = 0;
	if (g_once_init_enter (&contacts_setup_window_type_id__volatile)) {
		GType contacts_setup_window_type_id;
		contacts_setup_window_type_id = contacts_setup_window_get_type_once ();
		g_once_init_leave (&contacts_setup_window_type_id__volatile, contacts_setup_window_type_id);
	}
	return contacts_setup_window_type_id__volatile;
}

