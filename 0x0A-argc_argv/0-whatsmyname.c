#include <stdio.h>
#include "holberton.h"


/**
*main - main function
*@argc: number of arguments
*@argv: array of strings
*Return: return 0
**/

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[0]);
return (0);
}
