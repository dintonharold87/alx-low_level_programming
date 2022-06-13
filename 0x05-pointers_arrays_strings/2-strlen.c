/**
* _strlen-returns the length of the string
* @s:string whose length is returned
* Return: length of the string.
*/
#include "main.h"
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
		x++;
	return (x);
}
