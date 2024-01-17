#include <stdio.h>
#include "main.h"

/**
  * main-prints its name
  * Return: returns 0
  *@argc: the number of arguments
  *@argv: the arguments passed
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
