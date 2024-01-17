#include <stdio.h>
#include "main.h"

/**
  * main-prints its name
  *@argc: the name of the function
  *@argv: the array of string
  * Return: returns 0
  */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
