#include "main.h"
/**
 * _isdigit - check if a character is digit
 * @c : character being checked
 * Return: return 1 if the character is a digit otherwise return 0.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
		return (0);
}
