#ifndef _HEADER_H_
#define _HEADER_H_

#include <unistd.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));




#endif /* _HEADER_H_ */
