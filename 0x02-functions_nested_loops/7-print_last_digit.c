#include "main.h"
/**
* print_last_digit - returns last digit of a number.
* returns -1,
* @n: number to be tested
* Return: The last value.
*/
int print_last_digit(int n)
{
	int k;

	k = (n % 10);
	if (k < 0)
	{
		_putchar(-k + '0');
		return (-k);
	}
	else
	{
		_putchar(k + '0');
		return (k);
	}
	return (0);
}



