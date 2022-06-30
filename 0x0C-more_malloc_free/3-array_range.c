#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* *array_range-function that creates an array of integers.
* @min:minimum integer
* @max:maximum integer
* Return:the pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *ptr;
	int len, i;

	if (min > max)
		return (NULL);
	len = (max - min) + 1;
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
