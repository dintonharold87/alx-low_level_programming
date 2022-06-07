#include "main.h"
/**
* _abs - returns absolute value of an integer.
* returns -1,
* @n: number to be tested
* Return: The absolute value.
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
	_putchar('\n');
	return (0);
}



