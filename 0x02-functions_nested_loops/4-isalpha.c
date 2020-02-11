#include "holberton.h"
/**
 * _islower - checks if letter is lower case
 * @c: checks to see if char is lower case
 * Return: Always 0
 */
int _isalpha(int c)
{
if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
{
return (1);
}
else
{
return(0);
}
