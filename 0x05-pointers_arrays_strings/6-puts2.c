/**
* puts2-prints the characters of a string starting from the first character
*@str: string whose characters are printed
*/
#include "main.h"
void puts2(char *str)
{
	int i, j, length;

	i = 0;
	while (str[i] != '\0')
		i++;
	length = i - 1;
	for (j = 0; j <= length; j++)
	{
		if ((str[j] % 2) == 0)
			_putchar(str[j]);
		else
			continue;
	}
	_putchar('\n');
}
