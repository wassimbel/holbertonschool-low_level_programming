#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
*print_strings - prints strings, followed by a new line.
*@separator : string to be printed between numbers.
*@n : number of parameters based.
*Return: void.
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *s;

va_start(ap, n);

if (n > 0)
{

for (i = 0; i < n; i++)
{

s = va_arg(ap, char *);
if (s == 0)
printf("(nil)");
else
printf("%s", s);
if (separator && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
}
