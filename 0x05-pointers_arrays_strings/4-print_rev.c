#include "holberton.h"
/**
*print_rev - print a string in reverse
*@str:string of chr
**/
void print_rev(char *str)
{
int i;

	for (i = str['\0']; i >= 0;  i--)
		_putchar(str[i]);
	_putchar('\n');
}
