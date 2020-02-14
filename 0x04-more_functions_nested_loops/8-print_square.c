#include "holberton.h"
/**
*print_square - draw a square followed by a new line
*@n:integer
*
**/
void print_square(int n)
{
int i, j;
if (n < 1)
{
_putchar('\n');
}
else
{
for (j = 0; j < n; j++)
{
for (i = 0; i < n; i++)
_putchar('#');
_putchar('\n');
}
}
}

