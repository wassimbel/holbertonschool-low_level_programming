#include "holberton.h"

/**
 *print_alphabet_x10 - print 10times the alphabet in lowercase
 *@void: no argument
**/
void print_alphabet_x10(void)
{
char ch = 'a';
int j = 0;
for (j = 0; j < 10;)
{
for (ch = 'a'; ch <= 'z';)
{
_putchar(ch);
ch++;
}
_putchar('\n');
j++;
}
}
