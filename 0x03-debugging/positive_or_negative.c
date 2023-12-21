#include "main.h"

/**
  * positive_or_negative-prints a number that is either positive or negative
  * @i: the number to be printed
  * Return: returns 0
  */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("The number %d\n is positive", i);
	else if (i < 0)
		printf("The number %d\n is negative", i);
	else
		printf("The number %d\n is zero", i);
}
