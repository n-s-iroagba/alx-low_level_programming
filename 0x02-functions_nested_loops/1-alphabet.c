#include <stdio.h>
#include "main.h"
/**
*print_alphabet -  entry point.
*Return : 0 (if successful)
*/



void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
