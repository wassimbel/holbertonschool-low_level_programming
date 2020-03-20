#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * op_add - adds a and b
  * @a: int
  * @b: int
  * Return: a + b
  */

int op_add(int a, int b)
{
return (a + b);
}

/**
  * op_sub - subtracts a from b
  * @a: int
  * @b: int
  * Return: b - a
  */
int op_sub(int a, int b)
{
return (a - b);
}

/**
  * op_mul - multiple two integers
  * @a: int
  * @b: int
  * Return: a * b
  */

int op_mul(int a, int b)
{
return (a * b);
}

/**
  * op_div - function that divides a with b
  * @a: int
  * @b: int
  * Return: a / b
  */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
  * op_mod - returns remainder of the division of a by b
  * @a: int
  * @b: int
  * Return: a % b
  */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
