#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - main function
*@argc: number of arguments
*@argv: array of strings
*Return: return 1 if argc < 2 else return multiplication of two numbers
**/

int main(int argc, char *argv[])
{
int i, mul = 1;

if (argc != 3)
{
printf("Error\n");
return (0);
}
else
{
for (i = 1; i < argc; i++)
mul *= atoi(argv[i]);
printf("%d\n", mul);
return (0);
}
}
