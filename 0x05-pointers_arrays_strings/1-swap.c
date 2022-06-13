/**
* swap_int - function to swap two integers
* @a : ponter to first integer
* @b : pointer to second integer
 */
#include "main.h"
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

