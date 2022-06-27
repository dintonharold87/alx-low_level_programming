#include <stdlib.h>
#include "main.h"
/**
*_strdup - copies the string given as parameter
* @str: string to duplicate
* Return: pointer to the copied string (Success), NULL (Error)
*/
char *_strdup(char *str)
{
	char *p;
	unsigned int len, i;

	len = 0;
	i = 0;
	while (str[len])
		len++;
	if (str == NULL)
		return (NULL);

	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	while ((p[i] = str[i]) != '\0')
		i++;
	return (p);
}
