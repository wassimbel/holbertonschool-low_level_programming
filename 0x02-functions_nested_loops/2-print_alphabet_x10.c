include "holberton.h"
/**
 *print_alphabet -print 10times the alphabet in lowercase
 *@void: no argument
**/
void print_alphabet_x10(void)
{
char ch = 'a';
int i = 0;
for (ch = 'a'; ch <= 'z'; ch++)
{
for (int j = 0; j < 10; j++)
{
putchar(ch);
}
}
putchar('\n');
}
