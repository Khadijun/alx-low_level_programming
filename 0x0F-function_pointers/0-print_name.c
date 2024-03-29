#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - a function that prints a name
  * @name: the name to be printed
  * @f: pointer to the function
  * Return: returns 0
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
