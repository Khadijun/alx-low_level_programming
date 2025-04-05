#include "main.h"
#include <ctype.h>
/**
  * _islower - prints the alphabets in lowercase
  * @c: the parameter the function takes
  * Return: 1 if islower and 0 if its not
  */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
