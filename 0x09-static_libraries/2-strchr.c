#include "main.h"
/**
* _strchr- function that locates a character in a string.
* @c:character to be located
* @s:String that is to be searched for a character
* Return:a pointer to the first occurrence of the character
* in the string s, or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	int a = 0, b;

	/*  find length of string */
	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
