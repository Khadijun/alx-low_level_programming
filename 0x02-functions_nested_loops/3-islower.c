#include "main.h"

/**
  * _islower - prints the alphabets in lowercase
  * @c: the parameter the function takes
  * Return: 1 if islower and 0 if its not
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
