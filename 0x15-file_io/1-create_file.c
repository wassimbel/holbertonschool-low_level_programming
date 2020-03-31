#include "holberton.h"





int create_file(const char *filename, char *text_content)
{

int op, re, wr;

if (filename == NULL)
return (-1);

op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
if (op == -1)
return (-1);
return (1);

for (re = 0; text_content[re] != '\0'; re++)
;

wr = write(op, text_content, re);

if (wr == -1)
return (-1);

close(op);
return (1);
}
