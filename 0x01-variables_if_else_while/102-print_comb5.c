#include <stdio.h>
/**
* main -entry point of program
* Return: Always 0 (Success)
*/
int main(void)
{
int i, j, k, l;
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
for (k = i; k <= 57; k++)
{
for (l = j + 1; l <= 57; l++)
{
	putchar(i);
	putchar(j);
	putchar(' ');
	putchar(k);
	putchar(l);
if ((i != 57) || (j != 56) || (k != 57) || (l != 57))
{
	putchar(',');
	putchar(' ');
}
}
l = 48;
}
}
}
putchar('\n');
return (0);
}

