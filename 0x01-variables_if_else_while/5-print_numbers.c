#include <stdio.h>
/**
 * main - increment char
 * d
 * Return: 0
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
if (ch != 'e' && ch != 'q')
{
putchar(ch);
ch++;
}
else
{
ch++;
}
putchar('\n');
return (0);
}


