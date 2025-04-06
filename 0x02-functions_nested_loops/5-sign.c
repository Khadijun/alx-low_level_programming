#include "main.h"
/**
  * print_sign - prints signs before a parameter
  *@n: the parameter in use
  *Return: Returns 1 and prints + if n is greater than zero
  *Returns 0 and prints 0 if n is zero
  *Returns -1 and prints - if n is less than zero
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		return (0);
	}
}
