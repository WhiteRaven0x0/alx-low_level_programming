#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main(void) - Determine if n is positive, negative or zero
 *
 * Return: Always (0) success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("0 is zero\n");
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
