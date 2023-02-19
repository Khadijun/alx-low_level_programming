#include <stdlib.h>
#include <time.h>

/* main- serves as the starting point for program execution */
/* Description:Positive anything is better than negative nothing */
/* Returns: 0 if successful */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}

