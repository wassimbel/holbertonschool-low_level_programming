#include "holberton.h"

/**
  * read_textfile - reads a text file and prints it to the POSIX
  * @filename: points to the file
  * @letters: the number of letters it should read and print
  * Return: actual number of letters it could read and print
  */



ssize_t read_textfile(const char *filename, size_t letters)
{
int op, re, wr;
char *buff;

buff = malloc(sizeof(char) * letters);

if (buff == NULL)
return (0);

if (filename == NULL)
return (0);


/* open */

op = open(filename, O_RDONLY);
if (op == -1)
return (0);

/* read */

re = read(op, buff, letters);

if (re == -1)
return (0);

/* write */

wr = write(STDOUT_FILENO, buff, re);
if (wr == -1)
return (0);

free(buff);
close(op);
return (wr);
}
