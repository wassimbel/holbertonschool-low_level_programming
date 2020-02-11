#include "holberton.h"
/**
 * print_last_digit - the function last digit
 *
 * @r: is the Variable of the function.
 *
 * Return: of last digit
 */
int print_last_digit(int r)
{
	int num;

	num = r % 10;
	if (num < 0)
	{
		num = num * -1;
	}
	_putchar(num + '0');
	return (num);
}
