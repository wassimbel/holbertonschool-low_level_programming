#include "holberton.h"

 /**
  * print_times_table - prints the times table starting with 0
  * @n: integer
  */

void print_times_table(int n)
{
int i, j, x;

if (n > 15 || n < 0)
return;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
x = i * j;
if (j == 0)
{
_putchar(x + '0');
}

else if (x < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(x + '0');
}

else if (x >= 10 && x < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(x / 10 + '0');
_putchar(x % 10 + '0');
}

else
{
_putchar(',');
_putchar(' ');
_putchar((x / 100) + '0');
_putchar(x / 10 % 10 + '0');
_putchar(x % 10 + '0');
}
}
_putchar('\n');
}
}
