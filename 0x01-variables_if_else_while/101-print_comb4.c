#include<stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, num1, num2;

for (num = 0; num < 7; num++)
{
for (num1 = 1; num1 < 8; num1++)
{
for (num2 = num1; num2 < 9; num2++)
{
if (num > num1 && num1 > num2)
{
putchar('0' + num);
putchar('0' + num1);
putchar('0' + num2);
if (num != 7 || num1 != 8 || num2 != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
