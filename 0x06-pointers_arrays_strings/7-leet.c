/**
* leet-Function that encodes a string into 1337
* @str: string to be encoded.
* Return: return an encoded string
* string
*/
#include "main.h"
char *leet(char *str)
{
	int a = 0, b = 0, length = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (str[a])
	{
		b = 0;

		while (b < length)
		{
			if (str[a] == r[b] || str[a] - 32 == r[b])
			{
				str[a] = n[b];
			}

			b++;
		}

		a++;
	}
	return (str);
}
