#include <stdio.h>
/**
  * main-prints the alphabet in lowercase
  * Return: returns 0
  */

int main(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}
	putchar('\n');

	return (0);
}

