#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum number of coins to make change for an amount of money.
 * @argc : args number
 * @argv : args content
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i, x = 0, y = 0;
int coin[5] = {25, 10, 5, 2, 1};

if (argc == 2)
{
y = atoi(argv[1]);

if (y > 0)
{

for (i = 0; i < 5; i++)
{
x += y / coin[i];
y %= coin[i];

if (x == 0)
break;
}
printf("%d\n", x);
}

else
printf("0\n");
return (0);
}

else
{
printf("Error\n");
return (1);
}
}
