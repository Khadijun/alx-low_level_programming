#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - a function that executes a function given as a parameter.
  * @array: the array to be executed
  * @action: is a pointer to the function you need to use
  * @size: is the size of the array
  * Return: returns 0
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
