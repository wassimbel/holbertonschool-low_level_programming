#include "holberton.h"
/**
 *  puts2 - entry block
 * @str: string
 * Return: 0 (Sucess)
 **/
void puts2(char *str)
{
int i, len = 0;
while (str[len] != '\0')
len++;
len = len - 1;
for (i = 0; i <= len; i += 2)
if (i % 2 == 0)
{
_putchar(str[i]);
}
_putchar('\n');
}
