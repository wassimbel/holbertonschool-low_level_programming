#include "holberton.h"
/**
  * puts2 - prints one character out of two
  * @str: takes in a string
  */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
			_putchar(str[i]);
	_putchar('\n');
}
