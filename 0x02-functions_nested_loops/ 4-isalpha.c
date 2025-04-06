#include "main.h"
#include <ctype.h>
/**
  *_isalpha - checks whether an alphabet is an alphabet
  *@c: the character passed to isalpha
  *Return: if the character is an alphabet, returns non-zero, else returns 0
  */

int _isalpha(int c)
{
	int ch = 'a';
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}	
