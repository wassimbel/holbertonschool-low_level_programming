#include "holberton.h"

/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size: integer
 * Return: void
 */

void print_triangle(int size)
{
int i, j;
if (size > 0)
{
for (i = 0 ; i < size ; i++)
{
for (j = 1 ; j <= size ; j++)
if (j < size - i)
_putchar(' ');
else
_putchar('#')
}
_putchar('\n');
}
}
else
_putchar('\n');
}
