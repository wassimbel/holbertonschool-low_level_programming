#include "holberton.h"
#include <stdio.h>

/**
  * print_diagsums - prints sum of two diagonals of a square matrix of integers
  * @a: array
  * @size: size
  */

void print_diagsums(int *a, int size)
{
int i, j, x = 0, y = 0;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
x += a[i];
if (i + j == size - 1)
y += a[j];
a++;
}
}
printf("%d, %d\n", x, y);
}
