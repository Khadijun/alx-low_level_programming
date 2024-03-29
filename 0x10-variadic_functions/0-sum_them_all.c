#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - a function that returns the sum of all its parameters.
  * @n: the number of parameters in the function
  * Return: returns 0
  * @...: parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list numbers;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers, unsigned int);

	va_end(numbers);
	return (sum);

}

