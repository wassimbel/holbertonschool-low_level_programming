#include <stdio.h>

/**
 * main - main func
 * @void: no args
 * Return: 0
 **/

int main(void)
{
int i, j, e;
for (i = '0'; i <= '9'; i++)
{
for (j = i + 1; j <= '9'; j++)
{
for (e = j + 1; e <= '9'; e++)
{
putchar(i);
putchar(j);
putchar(e);

if (i != '7' || j != '8' || e != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
