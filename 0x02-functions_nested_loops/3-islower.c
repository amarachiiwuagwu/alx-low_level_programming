#include "main.h"
/**
 *Check for lowercase characters with the _islower function
 *@c: is the int that the function will use as an argument
* Return: 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
