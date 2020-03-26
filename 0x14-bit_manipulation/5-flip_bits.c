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
unsigned int i, count = 0, diff = n ^ m;

for (i = 0; i < (sizeof(int) * 8); i++)

{
if (diff & 1)
count++;

diff = diff >> 1;

}
return (count);
}
