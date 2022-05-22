#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_INIT([chencode], [0.0.2] [])
AC_CONFIG_SRCDIR([src/common.h])
AC_CONFIG_FILES([Makefile src/Makefile])

# Checks for programs.
AC_PROG_CC

AM_INIT_AUTOMAKE([-Wall no-dist dist-lzip foreign])

# Checks for header files.
AC_CHECK_HEADERS([stdint.h string.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_C_RESTRICT
AC_TYPE_SIZE_T
AC_TYPE_SSIZE_T
AC_TYPE_UINT16_T
AC_TYPE_UINT8_T

# Checks for library functions.

AC_OUTPUT
