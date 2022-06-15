/**
* _strcmp-Function to compare two strings
* @s1: first string
* @s2: second string appended to the dest string
* Return: return a character string where dest comes first followed by src
* string
*/
#include "main.h"
int _strcmp(char *s1, char *s2)
{
	int i, flag;

	i = flag = 0;
	for (; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else if (s1[i] != s2[i])
		{
			flag = s1[i] - s2[i];
			break;
		}
	}
	return (flag);
}

