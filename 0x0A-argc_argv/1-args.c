#include <stdio.h>
#include "holberton.h"


/**
*main - main function
*@argc: number of arguments
*@argv: array of strings
*Return: return 0
**/

int main(int argc, char *argv[] __attribute__((unused)))
{
int i;
for (i = 0; i < argc; i++)
printf("%d", i);
return (0);
}
