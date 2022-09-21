#include "main.h"
#include <string.h>
/**
*cap_string - function
*@s : char params
*Return: char  value
*/

char *cap_string(char *s)
{
int n;
char *ptr = s;
int i, j = strlen(s);
for (i = 0; i < j; i++)
{
if (s[i] >= 97 && s[i] <= 122)
{

if (s[i - 1] == ',' || s[i - 1] == ';' ||  s[i - 1] == '.' ||
s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' ||
s[i -1] == '\t' ||
s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == ' ')
{
s[i] = (s[i] - 32);
}
}
}

return (ptr);

}

