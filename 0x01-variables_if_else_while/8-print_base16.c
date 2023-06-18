#include<stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char az;

for (num = 48; num <= 58; num++)
{
putchar(num);
}
for (az = 'a'; az <= 'f'; az++)
{
putchar(az);
}
putchar('\n');
	return (0);
}
