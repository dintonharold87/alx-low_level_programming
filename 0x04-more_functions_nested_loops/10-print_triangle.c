#include "main.h"
/**
 * print_triangle - print a triangle on screen
 * @size: determines size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{

		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
			{
				_putchar(' ');
			}
			for (k = i + j; k >= 1; k--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
