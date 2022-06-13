/**
 * rev_string-print a string in reverse.
 * @s:String to be reversed.
*/
#include "main.h"
void rev_string(char *s)
{
	int x, y, length, length1;
	char swap;

	x = 0;
	while (s[x] != '\0')
		x++;
	length = x;
	length1 = length - 1;
	y = 0;
	while (y <= length1)
	{
		swap = *(s + y); /* store the first char) */
		*(s + y) = *(s + length1);
		*(s + length1) = swap;
		y++;
		length1--;
	}
}


