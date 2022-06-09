#include "main.h"
/**
 * _isupper - check if a character is uppercase
 * @c : character being checked
 * Return: return 1 if the character is uppercase otherwise return 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
