/**
* _strcat-Function to concatenate two strings
* @dest: first string
* @src: second string appended to the dest string
* Return: return a character string where dest comes first followed by src
* string
*/
#include "main.h"
char *_strcat(char *dest, char *src)
{
	int i, j, ldest, lsrc, x, y;

	i = 0;
	j = 0;
	ldest = 0;
	lsrc = 0;
	while (dest[i] != '\0')
	{
		ldest++;
		i++;
	}
	while (src[j] != '\0')
	{
		lsrc++;
		j++;
	}
	for (x = 0; x <= lsrc; x++)
	{
		for (y = ldest + x; y <= x; y++)
		{
			dest[y] = src[x];
		}
	}
	return (dest);
}

