#include <stdio.h>
/**
  * main- prints all possible combinations of single-digit numbers
  * Return: returns 0
  */

int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');

		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');

	}
	putchar('\n');

	return (0);
}

