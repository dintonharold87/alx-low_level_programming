#include <stdio.h>

/**
* main - finds and prints the sum of the even-valued terms
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	unsigned long int j, k, next_value, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next_value = j + k;
		j = k;
		k = next_value;
	}
	printf("%lu\n", sum);
	return (0);
}
