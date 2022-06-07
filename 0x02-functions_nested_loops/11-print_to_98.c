#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints natural numbers from n to 98.
* @n : starting integer
* Return: prints natural numbers from n to 98.
*/
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d", j);
		}
	}


	printf("\n");
}
