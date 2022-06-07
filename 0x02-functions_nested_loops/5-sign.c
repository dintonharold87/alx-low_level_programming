#include "main.h"
/**
* print_sign - returns 1 if n is positive,returns 0 if n is 0 otherwise
* returns -1,
* @n: number to be tested
* Return: 1 if positive, 0 if zero else -1.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
	return (0);
}


