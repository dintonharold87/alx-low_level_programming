/**
* rot13-Function  that that encodes a string using rot13
* @str: string to be encoded
* Return: an encoded string
* string
*/
#include "main.h"
char *rot13(char *str)
{
	int a = 0;

	while (str[a])
	{
		while ((str[a] >= 'a' && str[a] <= 'z') || (str[a] >= 'A' && str[a] <= 'Z'))
		{
			if ((str[a] > 'm' && str[a] <= 'z') || (str[a] > 'M' && str[a] <= 'Z'))
			{
				str[a] -= 13;
				break;
			}

			str[a] += 13;
			break;
		}

		a++;
	}
	return (str);
}
