#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - returns the sum of all its parameters.
*@n : number of parameters based.
*Return: sum of the parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i;
unsigned int sum = 0;
va_start(ap, n);
if (n == 0)
return (0);

for (i = 0; i < n; i++)
sum += va_arg(ap, const unsigned int);

va_end(ap);
return (sum);
}

