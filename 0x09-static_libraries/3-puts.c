/**
 * _puts- prints string to stdout
 * @str: string to be printed
*/
#include "main.h"
void _puts(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}


