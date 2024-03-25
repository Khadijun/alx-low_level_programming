#!/bin/bash

# Source files
SOURCE_FILES="_isalpha.c  _memcpy.c   _strcat.c  _strlen.c   _strspn.c  _isdigit.c  _memset.c   _strchr.c  _strncat.c  _strstr.c _abs.c     _islower.c  _putchar.c  _strcmp.c  _strncpy.c  _atoi.c    _isupper.c  _puts.c     _strcpy.c  _strpbrk.c "

# Compiler options
CC=gcc
CFLAGS="-shared -fPIC"
OUTPUT_FILE="liball.so"

# Compile and link
$CC $CFLAGS -o $OUTPUT_FILE $SOURCE_FILES
