#include <stdio.h>
/**
*main - entry point
*Return: 0 (successfull)
*/
int main(void)
{
char ch = 'a';

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'q' || ch == 'e')
{
continue;
}
putchar(ch);
}
putchar('\n');
return (0);
}
