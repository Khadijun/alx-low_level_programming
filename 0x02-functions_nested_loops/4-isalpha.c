#include "main.h"
/**
 * _isalpha - checks whether the parameter is an alphabet both lower and upper
 * @c: the parameter to be checked
 * Return: Returns 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
