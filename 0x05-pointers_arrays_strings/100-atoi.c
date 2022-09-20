#include <string.h>
#include "main.h"
#include<stdlib.h>
/**
 * _atoi - converts a string to an integer
 *
 * @s: string input parameter
 * Return: converted integer from string
*/

int _atoi(char *s)
{
int negative = 0, n, i;
unsigned int *num;
num = malloc(sizeof(int));
n = strlen(s);
for (i = 0; i < n; i++)
{
if (s[i] > '9' && s[i - 2] >= '0' && s[i - 2] <= '9' && *num > 0)
{
break;
}

if (s[i] == '-')
{
negative += 1;
}

if (s[i] >= '0' && s[i] <= '9')
{
*num = *num * 10 + (s[i] - 48);
}
}

if (negative % 2 != 0)
{
*num *= -1;
}
return (*num);
}
