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
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

