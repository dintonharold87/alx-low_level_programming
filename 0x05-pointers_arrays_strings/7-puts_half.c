/**
* puts_half- prints the last half of a string
* @str: string whose second half should be printed
*/
#include "main.h"
void puts_half(char *str)
{
	int x, i, j;

	x = 0;
	while (str[x] != '\0')
		x++;
	if ((x % 2) == 0)
	{
		for (i = (x / 2); str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		for (j = (x - 1) / 2; str[j] != '\0'; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}

