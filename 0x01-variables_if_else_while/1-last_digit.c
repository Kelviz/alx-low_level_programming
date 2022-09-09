#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lsn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lsn = n % 10;
	if (lsn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lsn);
	}
	else if (lsn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lsn);
	}
	else
	{
		printf("Last digit of %d is %d and not 0\n", n, lsn);
	}
	return (0);
}
