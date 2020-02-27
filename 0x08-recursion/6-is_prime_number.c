#include "holberton.h"


/**
*is_prime_number - returns a prime number
*@n:integer
*Return:integer
*/


int is_prime_number(int n)
{
if (n == 1 || n < 0)
return (0);
return (_prime_num(n, 2));
}

/**
*_prime_num - helps find the prime number
*@i:integr
*@n:integer
*Return:integer
*/

int _prime_num(int n, int i)
{
if (n == i)
{
return (1);
}
else if (n % i == 0)
{
return (0);
}
return (_prime_num(n, i + 1));
}
