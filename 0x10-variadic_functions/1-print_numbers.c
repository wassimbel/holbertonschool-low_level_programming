#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
*print_numbers - prints numbers, followed by a new line.
*@separator : string to be printed between numbers.
*@n : number of parameters based.
*Return: void.
**/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;

va_start(ap, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (separator && i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
