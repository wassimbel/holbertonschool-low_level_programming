#include "holberton.h"

/**
 * create_file - creates a file
 * @filename : name of a file
 * @text_content : the content of the file
 * Return: Returns: 1 on success, -1 on failure
 */



int create_file(const char *filename, char *text_content)
{

int op, re, wr;

if (filename == NULL)
return (-1);

op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (op == -1)
return (-1);

if (text_content == NULL)
return (1);

for (re = 0; text_content[re] != '\0'; re++)
;

wr = write(op, text_content, re);

if (wr == -1)
return (-1);

close(op);
return (1);
}
