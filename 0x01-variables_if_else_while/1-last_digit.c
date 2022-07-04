#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: 0 successful
 */
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	/* your code goes there */
	if (r > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, r);
	}
	else if (r == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, r);
	}
	else
		printf("last digit of %d is %d and is less than 6 not 0\n", n, r);
	return (0);
}
