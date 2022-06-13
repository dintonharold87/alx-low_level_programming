/**
 * rev_string-print a string in reverse.
 * @s:String to be reversed.
*/
#include "main.h"
void rev_string(char *s)
{
	int x, y, z, length, length1;

	x = 0;
	while (s[x] != '\0')
		x++;
	length = x;
	length1 = length - 1;

	for (y = 0; y < length / 2; y++)
	{
		z = s[y];
		s[y] = s[length1];
		s[length--] = z;
	}
}


