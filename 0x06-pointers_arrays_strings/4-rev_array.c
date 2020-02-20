#include "holberton.h"
/**
*reverse_array - reverse the content of an array
*@a:integer
*@n:integer
*Return: return 0
**/
void reverse_array(int *a, int n)
{
int  i = 0, j, tmp;
for (i = 0; i <= n; i++)

for (j = n - 1 - i; j >= n / 2; j--)
{
tmp = a[j];
a[j] = a [i];
a[i] = tmp;
i++;
}
}
