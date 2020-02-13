#include "holberton.h"
/**
*print_line - draw a straight line
*@n:integer
*
**/
void print_line(int n)
{

for (; n < 10; n++)
{
if (n < 1)
{
_putchar('\n');
}
_putchar(95);
}
_putchar('\n');
}

