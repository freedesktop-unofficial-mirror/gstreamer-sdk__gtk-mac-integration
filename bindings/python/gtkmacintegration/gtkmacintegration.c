/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 4 "gtkmacintegration.override"
#include <Python.h>
#include <pygtk/pygtk.h>
#include <gtk-mac-menu.h>
#include <gtk-mac-dock.h>
#include <gtk-mac-bundle.h>
#line 14 "gtkmacintegration.c"


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


/* ---------- forward type declarations ---------- */
PyTypeObject G_GNUC_INTERNAL PyGtkMacBundle_Type;
PyTypeObject G_GNUC_INTERNAL PyGtkMacDock_Type;

#line 34 "gtkmacintegration.c"



/* ----------- GtkMacBundle ----------- */

static int
_wrap_gtk_mac_bundle_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char* kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
                                     ":gtkmacintegration.MacBundle.__init__",
                                     kwlist))
        return -1;

    pygobject_constructv(self, 0, NULL);
    if (!self->obj) {
        PyErr_SetString(
            PyExc_RuntimeError, 
            "could not create gtkmacintegration.MacBundle object");
        return -1;
    }
    return 0;
}

static PyObject *
_wrap_gtk_mac_bundle_setup_environment(PyGObject *self)
{
    
    gtk_mac_bundle_setup_environment(GTK_MAC_BUNDLE(self->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_mac_bundle_get_id(PyGObject *self)
{
    const gchar *ret;

    
    ret = gtk_mac_bundle_get_id(GTK_MAC_BUNDLE(self->obj));
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_mac_bundle_get_path(PyGObject *self)
{
    const gchar *ret;

    
    ret = gtk_mac_bundle_get_path(GTK_MAC_BUNDLE(self->obj));
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_mac_bundle_get_is_app_bundle(PyGObject *self)
{
    int ret;

    
    ret = gtk_mac_bundle_get_is_app_bundle(GTK_MAC_BUNDLE(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_gtk_mac_bundle_get_localedir(PyGObject *self)
{
    const gchar *ret;

    
    ret = gtk_mac_bundle_get_localedir(GTK_MAC_BUNDLE(self->obj));
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_mac_bundle_get_datadir(PyGObject *self)
{
    const gchar *ret;

    
    ret = gtk_mac_bundle_get_datadir(GTK_MAC_BUNDLE(self->obj));
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_mac_bundle_get_resource_path(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", "type", "subdir", NULL };
    char *name, *type, *subdir;
    gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"sss:Gtk.MacBundle.get_resource_path", kwlist, &name, &type, &subdir))
        return NULL;
    
    ret = gtk_mac_bundle_get_resource_path(GTK_MAC_BUNDLE(self->obj), name, type, subdir);
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static const PyMethodDef _PyGtkMacBundle_methods[] = {
    { "setup_environment", (PyCFunction)_wrap_gtk_mac_bundle_setup_environment, METH_NOARGS,
      NULL },
    { "get_id", (PyCFunction)_wrap_gtk_mac_bundle_get_id, METH_NOARGS,
      NULL },
    { "get_path", (PyCFunction)_wrap_gtk_mac_bundle_get_path, METH_NOARGS,
      NULL },
    { "get_is_app_bundle", (PyCFunction)_wrap_gtk_mac_bundle_get_is_app_bundle, METH_NOARGS,
      NULL },
    { "get_localedir", (PyCFunction)_wrap_gtk_mac_bundle_get_localedir, METH_NOARGS,
      NULL },
    { "get_datadir", (PyCFunction)_wrap_gtk_mac_bundle_get_datadir, METH_NOARGS,
      NULL },
    { "get_resource_path", (PyCFunction)_wrap_gtk_mac_bundle_get_resource_path, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyGtkMacBundle_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "gtkmacintegration.MacBundle",                   /* tp_name */
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
    (struct PyMethodDef*)_PyGtkMacBundle_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_gtk_mac_bundle_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- GtkMacDock ----------- */

static int
_wrap_gtk_mac_dock_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char* kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
                                     ":gtkmacintegration.MacDock.__init__",
                                     kwlist))
        return -1;

    pygobject_constructv(self, 0, NULL);
    if (!self->obj) {
        PyErr_SetString(
            PyExc_RuntimeError, 
            "could not create gtkmacintegration.MacDock object");
        return -1;
    }
    return 0;
}

static PyObject *
_wrap_gtk_mac_dock_set_icon_from_pixbuf(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "pixbuf", NULL };
    PyGObject *pixbuf;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:Gtk.MacDock.set_icon_from_pixbuf", kwlist, &PyGdkPixbuf_Type, &pixbuf))
        return NULL;
    
    gtk_mac_dock_set_icon_from_pixbuf(GTK_MAC_DOCK(self->obj), GDK_PIXBUF(pixbuf->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_mac_dock_set_icon_from_resource(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "bundle", "name", "type", "subdir", NULL };
    PyGObject *bundle;
    char *name, *type, *subdir;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!sss:Gtk.MacDock.set_icon_from_resource", kwlist, &PyGtkMacBundle_Type, &bundle, &name, &type, &subdir))
        return NULL;
    
    gtk_mac_dock_set_icon_from_resource(GTK_MAC_DOCK(self->obj), GTK_MAC_BUNDLE(bundle->obj), name, type, subdir);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_mac_dock_set_overlay_from_pixbuf(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "pixbuf", NULL };
    PyGObject *pixbuf;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:Gtk.MacDock.set_overlay_from_pixbuf", kwlist, &PyGdkPixbuf_Type, &pixbuf))
        return NULL;
    
    gtk_mac_dock_set_overlay_from_pixbuf(GTK_MAC_DOCK(self->obj), GDK_PIXBUF(pixbuf->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_mac_dock_set_overlay_from_resource(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "bundle", "name", "type", "subdir", NULL };
    PyGObject *bundle;
    char *name, *type, *subdir;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!sss:Gtk.MacDock.set_overlay_from_resource", kwlist, &PyGtkMacBundle_Type, &bundle, &name, &type, &subdir))
        return NULL;
    
    gtk_mac_dock_set_overlay_from_resource(GTK_MAC_DOCK(self->obj), GTK_MAC_BUNDLE(bundle->obj), name, type, subdir);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static const PyMethodDef _PyGtkMacDock_methods[] = {
    { "set_icon_from_pixbuf", (PyCFunction)_wrap_gtk_mac_dock_set_icon_from_pixbuf, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_icon_from_resource", (PyCFunction)_wrap_gtk_mac_dock_set_icon_from_resource, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_overlay_from_pixbuf", (PyCFunction)_wrap_gtk_mac_dock_set_overlay_from_pixbuf, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_overlay_from_resource", (PyCFunction)_wrap_gtk_mac_dock_set_overlay_from_resource, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyGtkMacDock_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "gtkmacintegration.MacDock",                   /* tp_name */
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
    (struct PyMethodDef*)_PyGtkMacDock_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_gtk_mac_dock_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

static PyObject *
_wrap_gtk_mac_menu_set_menu_bar(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "menu_shell", NULL };
    PyGObject *menu_shell;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:gtk_mac_menu_set_menu_bar", kwlist, &PyGtkMenuShell_Type, &menu_shell))
        return NULL;
    
    gtk_mac_menu_set_menu_bar(GTK_MENU_SHELL(menu_shell->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_mac_menu_set_quit_menu_item(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "menu_item", NULL };
    PyGObject *menu_item;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:gtk_mac_menu_set_quit_menu_item", kwlist, &PyGtkMenuItem_Type, &menu_item))
        return NULL;
    
    gtk_mac_menu_set_quit_menu_item(GTK_MENU_ITEM(menu_item->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

#line 22 "gtkmacintegration.override"
static PyObject*
_wrap_gtk_mac_menu_add_app_menu_group (PyGObject *self)
{
    GtkMacMenuGroup *group;
    PyObject *ret;

    group = gtk_mac_menu_add_app_menu_group ();

    ret = PyCObject_FromVoidPtr ((void *) group, NULL);

    return ret;
}
#line 412 "gtkmacintegration.c"


#line 36 "gtkmacintegration.override"
static PyObject*
_wrap_gtk_mac_menu_add_app_menu_item (PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "group", "item", "label", NULL };
    PyObject *pygroup;
    PyObject *pyitem;
    char *label = NULL;
    GtkMacMenuGroup *group;
    GtkMenuItem *item;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "OO!z:add_app_menu_item", kwlist,
                                     &pygroup,
                                     &PyGtkMenuItem_Type, &pyitem,
                                     &label))
        return NULL;

    group = PyCObject_AsVoidPtr (pygroup);
    item = GTK_MENU_ITEM (pygobject_get (pyitem));

    gtk_mac_menu_add_app_menu_item (group, item, label);

    Py_INCREF (Py_None);
    return Py_None;
}
#line 440 "gtkmacintegration.c"


static PyObject *
_wrap_gtk_mac_menu_sync(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "menu_shell", NULL };
    PyGObject *menu_shell;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:gtk_mac_menu_sync", kwlist, &PyGtkMenuShell_Type, &menu_shell))
        return NULL;
    
    gtk_mac_menu_sync(GTK_MENU_SHELL(menu_shell->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_mac_menu_handle_menu_event(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "event", NULL };
    GdkEvent *event = NULL;
    PyObject *py_event;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O:gtk_mac_menu_handle_menu_event", kwlist, &py_event))
        return NULL;
    if (pyg_boxed_check(py_event, GDK_TYPE_EVENT))
        event = pyg_boxed_get(py_event, GdkEvent);
    else {
        PyErr_SetString(PyExc_TypeError, "event should be a GdkEvent");
        return NULL;
    }
    
    ret = gtk_mac_menu_handle_menu_event((GdkEventKey *)event);
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_gtk_mac_menu_set_global_key_handler_enabled(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "enabled", NULL };
    int enabled;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:gtk_mac_menu_set_global_key_handler_enabled", kwlist, &enabled))
        return NULL;
    
    gtk_mac_menu_set_global_key_handler_enabled(enabled);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_mac_menu_connect_window_key_handler(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "window", NULL };
    PyGObject *window;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:gtk_mac_menu_connect_window_key_handler", kwlist, &PyGtkWindow_Type, &window))
        return NULL;
    
    gtk_mac_menu_connect_window_key_handler(GTK_WINDOW(window->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gtk_mac_dock_get_default(PyObject *self)
{
    GtkMacDock *ret;

    
    ret = gtk_mac_dock_get_default();
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_gtk_mac_bundle_get_default(PyObject *self)
{
    GtkMacBundle *ret;

    
    ret = gtk_mac_bundle_get_default();
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

const PyMethodDef gtkmacintegration_functions[] = {
    { "gtk_mac_menu_set_menu_bar", (PyCFunction)_wrap_gtk_mac_menu_set_menu_bar, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gtk_mac_menu_set_quit_menu_item", (PyCFunction)_wrap_gtk_mac_menu_set_quit_menu_item, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gtk_mac_menu_add_app_menu_group", (PyCFunction)_wrap_gtk_mac_menu_add_app_menu_group, METH_NOARGS,
      NULL },
    { "gtk_mac_menu_add_app_menu_item", (PyCFunction)_wrap_gtk_mac_menu_add_app_menu_item, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gtk_mac_menu_sync", (PyCFunction)_wrap_gtk_mac_menu_sync, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gtk_mac_menu_handle_menu_event", (PyCFunction)_wrap_gtk_mac_menu_handle_menu_event, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gtk_mac_menu_set_global_key_handler_enabled", (PyCFunction)_wrap_gtk_mac_menu_set_global_key_handler_enabled, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gtk_mac_menu_connect_window_key_handler", (PyCFunction)_wrap_gtk_mac_menu_connect_window_key_handler, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gtk_mac_dock_get_default", (PyCFunction)_wrap_gtk_mac_dock_get_default, METH_NOARGS,
      NULL },
    { "gtk_mac_bundle_get_default", (PyCFunction)_wrap_gtk_mac_bundle_get_default, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};


/* ----------- enums and flags ----------- */

void
gtkmacintegration_add_constants(PyObject *module, const gchar *strip_prefix)
{
#ifdef VERSION
    PyModule_AddStringConstant(module, "__version__", VERSION);
#endif
  pyg_enum_add(module, "MacAttentionType", strip_prefix, GTK_TYPE_MAC_ATTENTION_TYPE);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
gtkmacintegration_register_classes(PyObject *d)
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


#line 630 "gtkmacintegration.c"
    pygobject_register_class(d, "GtkMacBundle", GTK_TYPE_MAC_BUNDLE, &PyGtkMacBundle_Type, Py_BuildValue("(O)", &PyGObject_Type));
    pyg_set_object_has_new_constructor(GTK_TYPE_MAC_BUNDLE);
    pygobject_register_class(d, "GtkMacDock", GTK_TYPE_MAC_DOCK, &PyGtkMacDock_Type, Py_BuildValue("(O)", &PyGObject_Type));
    pyg_set_object_has_new_constructor(GTK_TYPE_MAC_DOCK);
}
