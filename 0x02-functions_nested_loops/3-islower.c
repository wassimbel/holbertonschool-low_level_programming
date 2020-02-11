#include "holberton.h"
/**
*_islower- check fo lowercase
*@c:string
*Return:1 if c lowercase and 0 if not
**/
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}
