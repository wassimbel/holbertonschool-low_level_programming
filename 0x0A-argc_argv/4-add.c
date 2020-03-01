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
int j;
 if (argc == 0)
{
printf("0\n");
return (0);
}
else
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
if (!(isdigit(argv[i][j])) && (argv[i][j] > 0))
{
printf("Error\n");
return (1);
}
else
{
sum += atoi(argv[i]);
}
}
printf("%d\n", sum);
return (0);
}
}
