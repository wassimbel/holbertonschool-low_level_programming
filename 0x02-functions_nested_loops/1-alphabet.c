#include <holberton.h>
/**
 *print_alphabet -print alpha
 *@void: no argument
**/
void print_alphabet(void)
{
 char c;
 c = 'a';

	while (c <= 'z')
	{
         _putchar(c);
		c++;
	}
	_putchar('\n');
}

