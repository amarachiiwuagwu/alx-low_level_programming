#include<stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets;

for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
if ((alphabets == 'q' || alphabets == 'e') != 1)
{
putchar(alphabets);
}
}
putchar('\n');
	return (0);
}
