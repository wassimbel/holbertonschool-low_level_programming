#include <holberton.h>
/**
 *print_alphabet -print alpha
 *@void: no argument
**/
void print_alphabet(void)
{
 char ch;
 ch = 'a';
 for (ch <= 'z')
{
 _putchar(ch);
 ch++;
}
 _putchar('\n');
}

