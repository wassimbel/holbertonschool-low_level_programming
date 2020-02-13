#include "holberton.h"
/**
*print_numbers - print numbers from 0 to 9 followed bya new line
*@void: no arg
*Return: return 0
**/
int print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
return (0);
}
