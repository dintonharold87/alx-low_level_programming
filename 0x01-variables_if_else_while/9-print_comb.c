#include <stdio.h>
/**
* main -entry point of program
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar('\t');
}
}
putchar('\n');
return (0);
}

