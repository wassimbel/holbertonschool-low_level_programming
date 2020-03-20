#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main
 * @argc: arguments to take
 * @argv: double pointer
 * Return: 0
 */



int main(int argc, char **argv)
{
int final;

if (argc != 4)
{
printf("Error\n");
exit(98);
}
final = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", final);
return (0);
}
