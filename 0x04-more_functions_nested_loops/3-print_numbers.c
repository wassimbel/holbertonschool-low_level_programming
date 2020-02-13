#include "holberton.h"
/**
*print_numbers - print numbers from 0 to 9 followed bya new line
*
*return: return 0
**/
void print_numbers(void)

{
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
_putchar('\n');
}
return (0);
}
