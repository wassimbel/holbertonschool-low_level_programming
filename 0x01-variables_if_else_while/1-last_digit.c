#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints last digit
 * d
 * Return: 0
 */

int main(void)
{
    int n;
    int j;
    j = n % 10;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    printf("Last digit of");
    printf("%d", n);
    printf("is");
    if (j > 5)

    {
 printf("%d and is greater than 5", j);
    } else if (j < 6 && j != 0)
    {
    printf("%d and is less than 6 and not 0 ", j);
    }
    else
    {
    printf("%d and is zero", j);
    }
}

