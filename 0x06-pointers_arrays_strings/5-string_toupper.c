/**
* string_toupper-Function  that changes all lowercase letters
* of a string to uppercase
* @str: string to be converted to uppercase.
* Return: return string in uppercase
* string
*/
#include "main.h"
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		else
			continue;
	}
	return (str);
}
