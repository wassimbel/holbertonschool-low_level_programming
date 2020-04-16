#include <stdio.h>

/**
  * main - main func
  * @void: no args
  * Return: 0
  */

int main(void)
{
long int i, x = 1, y = 2, sum = 0;

printf("%lu, %lu, ", x, y);

for (i = 3; i <= 50; i++)
{
sum = x + y;
x = y;
y = sum;
if (i < 50)
{
printf("%lu, ", sum);
}
else
{
printf("%lu\n", sum);
}
}
return (0);
}
