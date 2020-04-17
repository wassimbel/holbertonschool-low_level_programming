#include <stdio.h>

/**
  * main - main func
  * @void: no args
  * Return: 0
  */

int main(void)
{
int i;
double x = 0, y = 0, z = 0;
printf("%i, %i, ", 1, 2);
x = 1;
y = 2;
for (i = 3 ; i <= 98 ; i++)
{
z = x + y;

if (i != 98)
printf("%.0f, ", z);

else
printf("%.0f", z);
x = y;
y = z;
}
return (0);
}
