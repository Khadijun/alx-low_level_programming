#include "main.h"
/**
  * print_alphabet- A function that prints alphabets in lowercase
  * Return: 0 on success
  */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
