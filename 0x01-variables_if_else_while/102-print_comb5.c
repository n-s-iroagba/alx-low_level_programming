#include <stdio.h>
/**
*main - entry point
*Return: 0 (successfull)
*/
int main(void)
{
int d1, d2, d3, d4, n = 0;

for (d1 = '0'; d1 <= '9'; d1++)
{
for (d2 = '0'; d2 <= '9'; d2++)
{
for (d3 = '0'; d3 <= '9'; d3++)
{
for (d4 = d3 + 1; d4 <= '9'; d4++, n++)
{
if (n > 0)
{
putchar(',');
putchar(' ');
}
putchar(d1);
putchar(d2);
putchar(' ');
putchar(d3);
putchar(d4);
}
}
}
}
putchar('\n');
return (0);
}



