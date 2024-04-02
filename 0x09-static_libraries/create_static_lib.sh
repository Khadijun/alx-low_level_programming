#!/bin/bash

# Source files
SRC_FILES="0-isupper.c  0-strcat.c  1-isdigit.c  1-strncat.c  2-strlen.c   3-islower.c  3-strcmp.c  4-isalpha.c  5-strstr.c  9-strcpy.c  _putchar.c 0-memset.c   100-atoi.c  1-memcpy.c   2-strchr.c   2-strncpy.c  3-puts.c   3-strspn.c  4-strpbrk.c  6-abs.c main.c"

# Compiler options
CC=gcc
#CFLAGS="-Wall -Werror -Wextra -pedantic -std=gnu89"

# Output static library name
OUTPUT_LIB="liball.a"

# Compile each source file into object files
for file in $SRC_FILES; do
    $CC $CFLAGS -c $file -o ${file%.c}.o
    done

# Create the static library
    ar rcs $OUTPUT_LIB *.o

# Clean up object files
    rm -f *.o

    echo "Static library $OUTPUT_LIB  created successfully."

