#include "main.h"
/**
* _isalpha - returns 1 if a character is a letter otherwise returns 0.
* @c: The character in ASCII code
* Return: 1 for a letter. 0 for the rest.
*/
int _isalpha(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
	_putchar('\n');
	return (0);
}


