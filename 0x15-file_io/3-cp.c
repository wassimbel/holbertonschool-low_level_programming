#include "holberton.h"
#include <stdio.h>


/**
 * check - check if file is NULL
 * @str: str
 * @str1: str1
 */
void check(char *str, char *str1)
{
if (str == NULL)
readerr(str);
if (str1 == NULL)
writeerr(str1);
}



/**
  * closeerr - return an error if can't close a file
  * @str: value
  */


void closeerr(int str)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", str);
exit(100);
}



/**
  * readerr - returns error if can't read from file
  * @str: pointer to str
  */

void readerr(char *str)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
exit(98);
}

/**
  * writeerr - returns an error if can't create/write to a file_to
  * @str: pointer to str
  */

void writeerr(char *str)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
exit(99);
}




int main(int argc, char *argv[])
{
int file_from, file_to, file_read, file_write;
char *buff;


if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

check(argv[1], argv[2]);

file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
readerr(argv[1]);

file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (file_to == -1)
writeerr(argv[2]);

buff = malloc(1024 * sizeof(char));
if (buff == NULL)
return (1);


file_read = read(file_from, buff, 1024);
if (file_read == -1)
readerr(argv[1]);

while (file_read > 0)
{
file_write = write(file_to, buff, file_read);
if (file_write == -1)
writeerr(argv[2]);

file_read = read(file_from, buff, 1024);
if (file_read == -1)
readerr(argv[1]);
}
file_write = close(file_to);
closeerr(file_write);

file_read = close(file_from);
closeerr(file_read);

free(buff);
return (0);
}

