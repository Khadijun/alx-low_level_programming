#include "main.h"
/**
  *print_last_digit - prints the last digit of a number
  *@x : the number to be used
  *Return: returns the value of the last digit
  */
int print_last_digit(int x)
{
	int num;

	num = x % 10;
	if (num < 0)
	{
		num = -num;
	}
	_putchar('0' + num);
	return (num);
}
