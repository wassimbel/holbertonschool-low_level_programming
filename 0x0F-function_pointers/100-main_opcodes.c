#include <stdio.h>
#include <stdlib.h>

/**
 * main -main func
 * @argc: args number
 * @argv: args content
 * Return: 0
 */


int main(int argc, char **argv)
{
int i, x;

if (argc != 2)
{
printf("Error\n");
return (1);
}
x = atoi(argv[1]);
if (x < 0)
{
printf("Error\n");
return (2);
}
for (i = 0; i < (x - 1); i++)
{
if (x != 0)
printf("%02hhx ", ((char *)main)[i]);
}
printf("%02hhx\n", ((char *)main)[i]);
return (0);
}
