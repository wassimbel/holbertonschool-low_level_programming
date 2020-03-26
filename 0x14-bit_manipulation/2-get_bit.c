#include "holberton.h"
#include <stdlib.h>


/**
  * get_bit - returns the value of of a bit at a given index
  * @n: unsigned long integer
  * @index: index of the bit
  * Return: the value of the bit at index index or -1 if an error occured
  */

int get_bit(unsigned long int n, unsigned int index)
{

if (index > sizeof(unsigned long int) * 8)
return (-1);

if ((n >> index) & 1)
return (1);

else
return (0);

return (index);
}
