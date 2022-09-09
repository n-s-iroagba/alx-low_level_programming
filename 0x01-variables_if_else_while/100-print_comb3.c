#include <stdio.h>
/**
*main - entry point
*Return: 0 (successfull)
*/
int main(void)
{
int i = 0;
for (i = 0; i <= 9; i++)
{
int j = i + 1;
for (; j <= 9, j++)
putchar(i % n + '0');
putchar(j % n + '0');
putchar(",");
putchar(" ");
}
putchar('\n');
return (0);
}
