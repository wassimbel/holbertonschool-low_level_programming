#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename : name of a file
 * @text_content :  is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */




int append_text_to_file(const char *filename, char *text_content)
{

int op, re, wr;

if (filename == NULL)
return (-1);

op = open(filename, O_CREAT | O_WRONLY | O_APPEND);
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
