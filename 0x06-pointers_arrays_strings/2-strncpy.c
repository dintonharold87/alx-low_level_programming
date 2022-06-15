/**
* _strncpy-Function to copy a string
* @dest: first string
* @src: second string to be copied to the first string.
* @n: max number of bytes to be copied from the src
* Return: return a character string where dest comes first followed by src
* string
*/
#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
