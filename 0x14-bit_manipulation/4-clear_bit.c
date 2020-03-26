#include "holberton.h"
#include <stdlib.h>

/**
  * clear_bit - clear the value of a bit to 1 at given index
  * @n: a pointer to a number
  * @index: the index of the bit to change
  * Return: 1 or -1 if error
  */

int clear_bit(unsigned long int *n, unsigned int index)
{

unsigned long int i;


if (index > sizeof(unsigned long int) * 8)
return (-1);

i = 1 << index;

*n = *n & ~i;
return (1);
}
