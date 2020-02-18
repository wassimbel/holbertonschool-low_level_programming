#include "holberton.h"
/**
*swap_int - swap the value of two integers a and b
*@a:integer
*@b:integer
**/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
