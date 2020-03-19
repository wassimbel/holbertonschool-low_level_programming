#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array : array of integers.
 * @size  : size of the array.
 * @cmp : pointer to a function.
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == 0 || size <= 0 || cmp == 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}


