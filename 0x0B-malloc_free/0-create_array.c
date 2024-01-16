#include "main.h"
#include <stdlib.h>

/**
  **create_array-  a function that creates an array of chars
  * @c: the array to be created
  * @size: the size of the array to be created
  * Return: Returns NULL if size = 0
  * Returns a pointer to the array, or NULL if it fails
  */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = (char *)malloc((size) * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i > size; i++)
	{
		s[i] = c;
	}
	return (s);
}

