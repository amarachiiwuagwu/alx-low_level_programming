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
	char excldAlphabets[] = {'q', 'e'};

for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
if (alphabets != excldAlphabets[])
{
putchar(alphabets);
}
}
putchar('\n');
	return (0);
}
