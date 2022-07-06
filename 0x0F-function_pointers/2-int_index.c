#include "function_pointers.h"
/**
* int_index-function that searches for an integer
* @array:array
* @size: size of the array
* @cmp: function pointer to a function to be used to compare values
* Return: index if integers are equal,
* -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
