#include <stdio.h>
/**
  * main-prints all the numbers of base 16 in lowercase
  * Return: returns 0
  */

int main(void)
{
	int i = 0;
	char ch;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

