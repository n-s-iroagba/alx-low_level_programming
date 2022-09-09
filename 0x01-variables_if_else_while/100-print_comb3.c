#include <stdio.h>
/**
*main - entry point
*Return: 0 (successfull)
*/
int main(void)
{
int i = 0;
while (i < 9)
{
int j = i + 1;
while (j < !0)
{
putchar(i % 10 + '0');
putchar(j % 10 + '0');
if (i != 8 && j != 9)
{
putchar(',');
putchar(' ');
}
j++;
}
++i
}
putchar('\n');
return (0);
}
