AC_PREREQ(2.52)

AC_INIT(gtk-mac-integration, 1.0.1)
AC_CONFIG_SRCDIR(src/gtk-mac-menu.c)
AC_CONFIG_MACRO_DIR(m4)
AM_INIT_AUTOMAKE(AC_PACKAGE_NAME, AC_PACKAGE_VERSION)

AM_CONFIG_HEADER(config.h)

AM_DISABLE_STATIC
AM_PROG_LIBTOOL
AC_MSG_CHECKING([Bitness])
AC_PREPROC_IFELSE(
    [AC_LANG_PROGRAM([[]],[[#ifndef __x86_64__
#error
#endif
	]])],
    [AC_MSG_RESULT([64-BIT])
     sixty_four_bit=yes],
    [AC_MSG_RESULT([32-Bit])
     sixty_four_bit=no])
AM_CONDITIONAL([SIXTY_FOUR_BIT], [test x$sixty_four_bit = xyes])
AC_ISC_POSIX
AC_PROG_CC
AM_PROG_CC_STDC
AC_HEADER_STDC
AC_PROG_OBJC
AM_PROG_CC_C_O

AM_PATH_GLIB_2_0

GTK_DOC_CHECK([1.11], [--flavour no-tmpl])

AC_ARG_WITH([gtk],
	[AS_HELP_STRING([--with-gtk],
		[select gtk+-3.0 or gtk+-2.0. @<:@default=check@:>@])],
	[],
	[with_gtk=check])
dnl gtk_major=

AS_ECHO(["Specified Gtk Version $with_gtk"])

AS_IF([test "x$with_gtk" = xgtk+-3.0],
         [PKG_CHECK_MODULES(MAC, [gtk+-3.0 >= 2.90], GTK_MAJOR="gtk+-3.0",
           AC_MSG_ERROR([GTK+-3.0 specified but not found]))],
      [test "x$with_gtk" = xgtk+-2.0],
         [PKG_CHECK_MODULES(MAC, [gtk+-2.0 >= 2.10], GTK_MAJOR="gtk+-2.0",
           AC_MSG_ERROR([GTK+-2.0 specified but not found]))],
      [PKG_CHECK_MODULES(MAC, [gtk+-3.0 >= 2.90],GTK_MAJOR="gtk+-3.0",
         PKG_CHECK_MODULES(MAC, [gtk+-2.0 >= 2.10], GTK_MAJOR="gtk+-2.0",
	    AC_MSG_ERROR([GTK+-2.0 Wersion 2.10 or higher or GTK+-3.0 Version 2.90.0 or higher is required to build gtk-mac-integration])))])

AC_MSG_CHECKING([GTK+ Version])

GTK_VERSION=`$PKG_CONFIG --modversion ${GTK_MAJOR}`
AC_SUBST(GTK_MAJOR)
AC_SUBST(GTK_VERSION)
AC_MSG_RESULT("$GTK_VERSION")
AM_CONDITIONAL([INTROSPECTION], [test x$GTK_MAJOR = "xgtk+-3.0"])

GTK_PYTHON_CHECK

# This will cause the automake generated makefiles to pass the correct
# flags to aclocal.
ACLOCAL_AMFLAGS="\${ACLOCAL_FLAGS}"
AC_SUBST(ACLOCAL_AMFLAGS)
AC_DEFINE_UNQUOTED([PREFIX],["$prefix"], [Installation prefix (for making filenames)])

AC_CONFIG_FILES(
	Makefile
	src/Makefile
        bindings/Makefile
        bindings/python/Makefile
	bindings/python/gtkmacintegration/Makefile
	bindings/python/gtk_osxapplication/Makefile
	bindings/python/gtk3_osxapplication/Makefile
        data/Makefile
        data/gtk-mac-integration.pc
	docs/Makefile
	docs/reference/Makefile
	strings/Makefile
)

AC_OUTPUT

echo
echo "Prefix         : $prefix"
echo "Python bindings: $enable_python"
echo
