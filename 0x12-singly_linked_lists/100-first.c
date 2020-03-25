#include "lists.h"


void __attribute__((constructor)) prevmain(void);


/**
 * prevmain - function that is called before main
 * @void: no arg
 */

void prevmain(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
