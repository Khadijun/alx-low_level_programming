#include <stdio.h>
/**
  * main-prints all single digit numbers of base 10 starting from 0
  * Return: returns 0
  */

int main(void)
{
	char  i = 0;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');

	return (0);
}
