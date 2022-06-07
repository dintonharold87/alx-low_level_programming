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

	if (n < 0)
	{
		n = n * -1;
	}
	k = n % 10;
	_putchar(k + '0');
	_putchar('\n');
	return (0);
}



