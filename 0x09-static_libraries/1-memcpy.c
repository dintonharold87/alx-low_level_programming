#include "main.h"
/**
* _memcpy- function copies n bytes from memory area src to memory area dest
* @src:Starting address from where bytes are copied
* @dest:End address where the bytes are now.
* @n:Number of bytes to be copied
* Return:a pointer to the memory area s
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* Typecast src and dest addresses to (char *) */
	char *csrc = (char *)src;
	char *cdest = (char *)dest;
	/*Copy contents of src[] to dest[] */
	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}

	return (dest);
}
