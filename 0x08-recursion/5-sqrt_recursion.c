#include "holberton.h"


/**
*sqrt_recursion - check for square root
*@n:int to check
*@i:int counter
*Return: int the sqrt
*/

int sqrt_recursion(int n, int i)
{
if (i * i == n)
return (i);
if (i * i <= n)
return (sqrt_recursion(n, i + 1));
else
return (-1);
}

/**
*_sqrt_recursion - returns the natural square root of a number.
*@n:integer
*Return:integer
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (sqrt_recursion(n, 1));
}
