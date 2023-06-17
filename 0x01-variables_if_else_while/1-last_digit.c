#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;

	if (n > 5)
	{
	printf("The last digit of %d  is %d  and is greater than 5\n", n, lastn);
	}
	else if (n == 0)
	{
	printf("The last digit of %d is %d and is 0\n", n, lastn);
	}
	else
	{
	printf("The last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
	}
	return (0);
}
