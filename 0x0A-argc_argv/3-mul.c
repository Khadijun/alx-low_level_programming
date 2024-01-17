#include <stdio.h>
#include <stdlib.h>

/**
  * main-print the result of the multiplication
  * Return: 0 on succes
  *@argc: the number of arguments passed
  *@argv: the arguments passed
  */

int main(int argc, char *argv[])
{
	int number1, number2, result;


	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);

	result = number1 * number2;

	printf("%d\n", result);
	return (0);
}
