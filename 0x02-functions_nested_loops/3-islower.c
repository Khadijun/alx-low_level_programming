#include "main.h"
#include <ctype.h>
/**
  * _islower - prints the alphabets in lowercase
  * @c: the parameter the function takes
  * Return: 1 if islower and 0 if its not
  */
int _islower(int c)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		int c = 'a';

		while (c != 'A' && c != 'Z')
		{
			if (_islower(c))
				return (1);
		}
		_putchar(ch + '0');
		_putchar('\n');
	}
	return (0);
}
