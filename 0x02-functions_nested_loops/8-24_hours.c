#include "holberton.h"
/**
 * jack_bauer - print every minute of the day
 *
 * Return: min of the day
 */
void jack_bauer(void)
{
int h;
int m;
for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
_putchar(h / 10);
_putchar(h % 10);
_putchar(':');
_putchar(m / 10);
_putchar(m % 10);
}
}
}
