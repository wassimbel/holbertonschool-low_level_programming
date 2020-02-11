#include <holberton.h>
/**
 *print_alphabet -print alpha
 *@void: no argument
**/
void print_alphabet(void)
{
char ch;
ch = 'a';
for (ch = 'a'; ch <= 'z';)
{
_putchar(ch);
ch++;
}
_putchar('\n');
}

