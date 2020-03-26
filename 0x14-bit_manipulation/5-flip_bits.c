#include "holberton.h"
#include <stdlib.h>

/**
  * flip_bits - number of bits you d need to flip to get from number to another
  * @n: integer
  * @m: integer to compare
  * Return: number of bits to flip
  */



unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int count = 0, diff = n ^ m;

while (diff != 0)
{
if (diff & 1)
count += 1;

diff = diff >> 1;

}
return (count);
}
