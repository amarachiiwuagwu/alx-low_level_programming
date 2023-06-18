#include<stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Lcase, Ucase;

for (Lcase = 'a'; Lcase <= 'z'; Lcase++)
{
putchar(Lcase);
}
for (Ucase = 'A'; Ucase <= 'Z'; Ucase++)
{
putchar(Ucase);
}
putchar('\n');
	return (0);
}
