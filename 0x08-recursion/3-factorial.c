#include "holberton.h"

/**
*factorial - returns factorial of a given number
*@n:integer
*Return: return integer
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
