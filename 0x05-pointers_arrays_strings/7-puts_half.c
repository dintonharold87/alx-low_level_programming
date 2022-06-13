/**
* puts_half- prints the last half of a string
* @str: string whose second half should be printed
*/
#include "main.h"
void puts_half(char *str)
{
	int x, j;

	x = 0;
	while (str[x] != '\0')
		x++;
	if ((x % 2) == 0)
		j = x / 2;
	else
	{
		j = (x - 1) / 2;
		j += 1;
	}
		for (; j < x; j++)
			_putchar(str[j]);
	_putchar('\n');
}

