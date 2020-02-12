#include "holberton.h"
/**
*times_table - print the time table 9 times
*
*return: time table
**/

void times_table(void)
{
int i;
int j;
int x;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
x = i * j;
if (j > 1)
{
_putchar(x + '0');
_putchar(',');
}
else if (x < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(x + '0');
_putchar(',');
}
if (x > 10)
{
_putchar(' ');
_putchar(x / 10 + '0');
_putchar(x % 10 + '0');
}
if (j != 9)
}
_putchar(',');
}
_putchar('\n');
}
}
