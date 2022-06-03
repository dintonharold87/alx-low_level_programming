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
for (k = 48; k <= 57; k++)
{
for (l = k + 1; l <= 57; l++)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(k);
putchar(l);
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

