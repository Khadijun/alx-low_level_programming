#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers - prints numbers
  * @separator: is the string to be printed between numbers
  * @n: the number of integers passed to the function
  * Return: returns 0
  * @...: parameters used
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	if (separator == NULL)
	{
		printf("error\n");
		return;
	}
	va_start(list, n);


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
