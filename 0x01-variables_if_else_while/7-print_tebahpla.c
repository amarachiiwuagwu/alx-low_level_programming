#include<stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char revAlphabets;

for (revAlphabets = 'z'; revAlphabets >= 'a'; revAlphabets--)
{
putchar(revAlphabets);
}
putchar('\n');
	return (0);
}
