#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - main function
*@argc: number of arguments
*@argv: array of strings
*Return: return 1 if one number contains symbols else return 0
**/
int main(int argc, char *argv[])
{
int i = 1, sum = 0;

if (argc == 0)
{
printf("0\n");
return (0);
}
else
{
for (i = 1; i < argc; i++)
{
if (!(isdigit(*argv[i])) && (*argv[i]) > 0)
{
printf("Error\n");
return (1);
}
else
{
sum += atoi(argv[i]);
}
}
}
printf("%d\n", sum);
return (0);
}
