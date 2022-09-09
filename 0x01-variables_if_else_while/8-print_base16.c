#include <stdio.h>
/**
*main - entry point
*Return: 0 (successfull)
*/
int main(void)
{
int i = '1';
char ch = 'a';
for (i = 0; i <= 9; i++)
putchar(i % 10 + '0');
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
