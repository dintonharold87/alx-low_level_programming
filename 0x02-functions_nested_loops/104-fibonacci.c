#include <stdio.h>

/**
* main - finds and prints the first 98 Fibonacci numbers,
* starting with 1 and 2
 *    * followed by a new line
* Return: ALways 0 (Success)
*/
int main(void)
{
	unsigned long int a, b, d, b1, b2, d1, d2;

	b = 1;
	d = 2;

	printf("%lu", b);
	for (a = 1; a < 91; a++)
	{
		printf(", %lu", d);
		d = d + b;
		b = d - b;
	}

	b1 = b / 1000000000;
	b2 = b % 1000000000;
	d1 = d / 1000000000;
	d2 = d % 1000000000;

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", d1 + (d2 / 1000000000));
		printf("%lu", d2 % 1000000000);
		d1 = d1 + b1;
		b1 = d1 - b1;
		d2 = d2 + b2;
		b2 = d2 - b2;
	}
	printf("\n");
	return (0);
}
