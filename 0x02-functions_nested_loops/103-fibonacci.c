#include <stdio.h>

/**
  * main - main func
  * @void: no args
  * Return: 0
  */

int main(void)
{
unsigned long int i = 1, j = 2, x = 0, y = 2;

while (x <= 4000000)
{
x = i + j;
i = j;
j = x;
if (x % 2 == 0)
{
y += x;
}
}
printf("%lu\n", y);
return (0);
}
