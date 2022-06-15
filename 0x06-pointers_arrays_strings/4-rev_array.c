/**
* reverse_array-Function to reverse the elements of an array
* @a: array being pointed to.
* @n: number of elements of the array.
*/
#include "main.h"
void reverse_array(int *a, int n)
{
	int i, swap;

	for (i = 0; i < n; i++)
	{
		swap = a[i];
		a[i] = a[n - 1];
		a[n - 1] = swap;
		n--;
	}
}
