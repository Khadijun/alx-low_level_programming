#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
  * main - entry point of the program
  * Return: returns 0
  */
int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k =  n % 10;
	/* your code goes there */
	if (k > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, k);
	else if (k < 6 && k != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, k);
	else
		 printf("Last digit of %d is %d and is 0\n", n, k);
	return (0);
}

