#include <stdio.h>
/**
  * main-prints the alphabet in lowercase
  * Return: returns 0
  */

int main(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	{
		char j = 'A';

		for (j = 'A'; j <= 'Z'; j++)
			putchar(j);
	}

	putchar('\n');

	return (0);
}
