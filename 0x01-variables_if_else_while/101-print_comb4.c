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
for (j = i + 1; j <= 57; j++)
{
for (k = j + 1; k <= 57; k++)
{
l = (i != j);
if (l != k)
{
putchar(i);
putchar(j);
putchar(k);
if ((i != 55) || (j != 56) || (k != 57))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
