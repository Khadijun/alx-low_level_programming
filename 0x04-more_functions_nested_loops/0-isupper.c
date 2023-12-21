#include "main.h"
/**
  *_isupper- prints the character c in uppercase
  *@c: the character to be printed
  *Return: returns 1 upon success and 0 on error
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
