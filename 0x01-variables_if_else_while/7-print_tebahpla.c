#include <stdio.h>
/**
  * main-prints the lowercase alphabet in reverse
  * Return: returns 0
  */

int main(void)
{
	char i = 'z';

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
