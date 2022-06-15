/**
* cap_string-Function  that capitalizes all words
* of a string
* @str: string whose words are to be capitalized.
* Return: return string in uppercase
* string
*/
#include "main.h"
char *cap_string(char *str)
{
	int i, j;

	char separator[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (str[i] == separator[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
	return (str);
}
