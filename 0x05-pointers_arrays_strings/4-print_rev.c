#include "holberton.h"
/**
*print_rev - print a string in reverse
*@str:string of chr
**/
void print_rev(char *str)
{
int i = 0, j;
while (str[i] != '\0')
i++;
for (j = i - 1 ; j >= 0;  j--)
_putchar(str[j]);
_putchar('\n');
}
