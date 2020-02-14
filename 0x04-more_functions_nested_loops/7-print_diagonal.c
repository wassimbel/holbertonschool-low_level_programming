#include "holberton.h"

/**
*print_diagonal - draw a diagonal line
*@n:integer
*
**/
void print_diagonal(int n)
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
for (i = 0; i < j; i++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
}
