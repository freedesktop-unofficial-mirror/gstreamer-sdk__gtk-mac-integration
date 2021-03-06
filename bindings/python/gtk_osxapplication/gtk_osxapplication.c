/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 4 "gtk_osxapplication.override"
#include <Python.h>
#include <pygtk/pygtk.h>
#include <gtkosxapplication.h>

#line 13 "gtk_osxapplication.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGdkPixbuf_Type;
#define PyGdkPixbuf_Type (*_PyGdkPixbuf_Type)
static PyTypeObject *_PyGtkMenuShell_Type;
#define PyGtkMenuShell_Type (*_PyGtkMenuShell_Type)
static PyTypeObject *_PyGtkMenuItem_Type;
#define PyGtkMenuItem_Type (*_PyGtkMenuItem_Type)
static PyTypeObject *_PyGtkWindow_Type;
#define PyGtkWindow_Type (*_PyGtkWindow_Type)
static PyTypeObject *_PyGtkWidget_Type;
#define PyGtkWidget_Type (*_PyGtkWidget_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject G_GNUC_INTERNAL PyGtkOSXApplication_Type;

#line 34 "gtk_osxapplication.c"



/* ----------- GtkOSXApplication ----------- */

static PyObject *
_wrap_gtk_osxapplication_ready(PyGObject *self)
{
    
    gtk_osxapplication_ready(GTK_OSX_APPLICATION(self->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_osxapplication_cleanup(PyGObject *self)
{
    
    gtk_osxapplication_cleanup(GTK_OSX_APPLICATION(self->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_osxapplication_set_use_quartz_accelerators(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "use_quartz_accelerators", NULL };
    int use_quartz_accelerators;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:Gtk.OSXApplication.set_use_quartz_accelerators", kwlist, &use_quartz_accelerators))
        return NULL;
    
    gtk_osxapplication_set_use_quartz_accelerators(GTK_OSX_APPLICATION(self->obj), use_quartz_accelerators);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_osxapplication_use_quartz_accelerators(PyGObject *self)
{
    int ret;

    
    ret = gtk_osxapplication_use_quartz_accelerators(GTK_OSX_APPLICATION(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_gtk_osxapplication_set_menu_bar(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "menu_shell", NULL };
    PyGObject *menu_shell;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:Gtk.OSXApplication.set_menu_bar", kwlist, &PyGtkMenuShell_Type, &menu_shell))
        return NULL;
    
    gtk_osxapplication_set_menu_bar(GTK_OSX_APPLICATION(self->obj), GTK_MENU_SHELL(menu_shell->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_osxapplication_sync_menubar(PyGObject *self)
{
    
    gtk_osxapplication_sync_menubar(GTK_OSX_APPLICATION(self->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

#line 60 "gtk_osxapplication.override"
static PyObject*
_wrap_gtk_osxapplication_insert_app_menu_item (PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "item", "index", NULL };
    PyObject *pyitem;
    GtkWidget *item;
    gint index;
   if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O!i:insert_app_menu_item",
				    kwlist,
				    &PyGtkWidget_Type,
				    &pyitem, &index))
        return NULL;

    Py_INCREF (Py_None);
    item = GTK_WIDGET (pygobject_get (pyitem));
    gtk_osxapplication_insert_app_menu_item (GTK_OSX_APPLICATION(self->obj), item, index);
    return Py_None;
}
#line 131 "gtk_osxapplication.c"


static PyObject *
_wrap_gtk_osxapplication_set_window_menu(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "menu_item", NULL };
    PyGObject *menu_item;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:Gtk.OSXApplication.set_window_menu", kwlist, &PyGtkMenuItem_Type, &menu_item))
        return NULL;
    
    gtk_osxapplication_set_window_menu(GTK_OSX_APPLICATION(self->obj), GTK_MENU_ITEM(menu_item->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_osxapplication_set_help_menu(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "menu_item", NULL };
    PyGObject *menu_item;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:Gtk.OSXApplication.set_help_menu", kwlist, &PyGtkMenuItem_Type, &menu_item))
        return NULL;
    
    gtk_osxapplication_set_help_menu(GTK_OSX_APPLICATION(self->obj), GTK_MENU_ITEM(menu_item->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_osxapplication_set_dock_menu(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "menu_shell", NULL };
    PyGObject *menu_shell;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:Gtk.OSXApplication.set_dock_menu", kwlist, &PyGtkMenuShell_Type, &menu_shell))
        return NULL;
    
    gtk_osxapplication_set_dock_menu(GTK_OSX_APPLICATION(self->obj), GTK_MENU_SHELL(menu_shell->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_osxapplication_set_dock_icon_pixbuf(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "pixbuf", NULL };
    PyGObject *pixbuf;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:Gtk.OSXApplication.set_dock_icon_pixbuf", kwlist, &PyGdkPixbuf_Type, &pixbuf))
        return NULL;
    
    gtk_osxapplication_set_dock_icon_pixbuf(GTK_OSX_APPLICATION(self->obj), GDK_PIXBUF(pixbuf->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_osxapplication_set_dock_icon_resource(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", "type", "subdir", NULL };
    char *name, *type, *subdir;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"sss:Gtk.OSXApplication.set_dock_icon_resource", kwlist, &name, &type, &subdir))
        return NULL;
    
    gtk_osxapplication_set_dock_icon_resource(GTK_OSX_APPLICATION(self->obj), name, type, subdir);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_osxapplication_attention_request(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "type", NULL };
    GtkOSXApplicationAttentionType type;
    PyObject *py_type = NULL;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O:Gtk.OSXApplication.attention_request", kwlist, &py_type))
        return NULL;
    if (pyg_enum_get_value(GTK_TYPE_OSX_APPLICATION_ATTENTION_TYPE, py_type, (gpointer)&type))
        return NULL;
    
    ret = gtk_osxapplication_attention_request(GTK_OSX_APPLICATION(self->obj), type);
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_gtk_osxapplication_cancel_attention_request(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "id", NULL };
    int id;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:Gtk.OSXApplication.cancel_attention_request", kwlist, &id))
        return NULL;
    
    gtk_osxapplication_cancel_attention_request(GTK_OSX_APPLICATION(self->obj), id);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static const PyMethodDef _PyGtkOSXApplication_methods[] = {
    { "ready", (PyCFunction)_wrap_gtk_osxapplication_ready, METH_NOARGS,
      NULL },
    { "cleanup", (PyCFunction)_wrap_gtk_osxapplication_cleanup, METH_NOARGS,
      NULL },
    { "set_use_quartz_accelerators", (PyCFunction)_wrap_gtk_osxapplication_set_use_quartz_accelerators, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "use_quartz_accelerators", (PyCFunction)_wrap_gtk_osxapplication_use_quartz_accelerators, METH_NOARGS,
      NULL },
    { "set_menu_bar", (PyCFunction)_wrap_gtk_osxapplication_set_menu_bar, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "sync_menubar", (PyCFunction)_wrap_gtk_osxapplication_sync_menubar, METH_NOARGS,
      NULL },
    { "insert_app_menu_item", (PyCFunction)_wrap_gtk_osxapplication_insert_app_menu_item, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_window_menu", (PyCFunction)_wrap_gtk_osxapplication_set_window_menu, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_help_menu", (PyCFunction)_wrap_gtk_osxapplication_set_help_menu, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_dock_menu", (PyCFunction)_wrap_gtk_osxapplication_set_dock_menu, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_dock_icon_pixbuf", (PyCFunction)_wrap_gtk_osxapplication_set_dock_icon_pixbuf, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_dock_icon_resource", (PyCFunction)_wrap_gtk_osxapplication_set_dock_icon_resource, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "attention_request", (PyCFunction)_wrap_gtk_osxapplication_attention_request, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "cancel_attention_request", (PyCFunction)_wrap_gtk_osxapplication_cancel_attention_request, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyGtkOSXApplication_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "gtk_osxapplication.OSXApplication",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyGtkOSXApplication_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)0,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

static PyObject *
_wrap_quartz_application_get_bundle_path(PyObject *self)
{
    gchar *ret;

    
    ret = quartz_application_get_bundle_path();
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_quartz_application_get_resource_path(PyObject *self)
{
    gchar *ret;

    
    ret = quartz_application_get_resource_path();
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_quartz_application_get_executable_path(PyObject *self)
{
    gchar *ret;

    
    ret = quartz_application_get_executable_path();
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_quartz_application_get_bundle_id(PyObject *self)
{
    gchar *ret;

    
    ret = quartz_application_get_bundle_id();
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

#line 80 "gtk_osxapplication.override"
static PyObject*
_wrap_quartz_application_get_bundle_info (PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "key", NULL };
    char *key;
    gpointer item;
    PyObject *ret;

    item = quartz_application_get_bundle_info (key);

    ret = PyCObject_FromVoidPtr (item, NULL);

    return ret;
}
#line 406 "gtk_osxapplication.c"


const PyMethodDef gtk_osxapplication_functions[] = {
    { "quartz_application_get_bundle_path", (PyCFunction)_wrap_quartz_application_get_bundle_path, METH_NOARGS,
      NULL },
    { "quartz_application_get_resource_path", (PyCFunction)_wrap_quartz_application_get_resource_path, METH_NOARGS,
      NULL },
    { "quartz_application_get_executable_path", (PyCFunction)_wrap_quartz_application_get_executable_path, METH_NOARGS,
      NULL },
    { "quartz_application_get_bundle_id", (PyCFunction)_wrap_quartz_application_get_bundle_id, METH_NOARGS,
      NULL },
    { "quartz_application_get_bundle_info", (PyCFunction)_wrap_quartz_application_get_bundle_info, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};


/* ----------- enums and flags ----------- */

void
gtk_osxapplication_add_constants(PyObject *module, const gchar *strip_prefix)
{
#ifdef VERSION
    PyModule_AddStringConstant(module, "__version__", VERSION);
#endif
  pyg_enum_add(module, "OSXApplicationAttentionType", strip_prefix, GTK_TYPE_OSX_APPLICATION_ATTENTION_TYPE);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
gtk_osxapplication_register_classes(PyObject *d)
{
    PyObject *module;

    if ((module = PyImport_ImportModule("gobject")) != NULL) {
        _PyGObject_Type = (PyTypeObject *)PyObject_GetAttrString(module, "GObject");
        if (_PyGObject_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name GObject from gobject");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gobject");
        return ;
    }
    if ((module = PyImport_ImportModule("gtk")) != NULL) {
        _PyGtkMenuShell_Type = (PyTypeObject *)PyObject_GetAttrString(module, "MenuShell");
        if (_PyGtkMenuShell_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name MenuShell from gtk");
            return ;
        }
        _PyGtkMenuItem_Type = (PyTypeObject *)PyObject_GetAttrString(module, "MenuItem");
        if (_PyGtkMenuItem_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name MenuItem from gtk");
            return ;
        }
        _PyGtkWindow_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Window");
        if (_PyGtkWindow_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Window from gtk");
            return ;
        }
        _PyGtkWidget_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Widget");
        if (_PyGtkWidget_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Widget from gtk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return ;
    }
    if ((module = PyImport_ImportModule("gtk.gdk")) != NULL) {
        _PyGdkPixbuf_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Pixbuf");
        if (_PyGdkPixbuf_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Pixbuf from gtk.gdk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk.gdk");
        return ;
    }


#line 500 "gtk_osxapplication.c"
    pygobject_register_class(d, "GtkOSXApplication", GTK_TYPE_OSX_APPLICATION, &PyGtkOSXApplication_Type, Py_BuildValue("(O)", &PyGObject_Type));
    pyg_set_object_has_new_constructor(GTK_TYPE_OSX_APPLICATION);
}
