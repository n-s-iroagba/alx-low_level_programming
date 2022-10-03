#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
*str_concat- function
*@s1: char params
*@s2: char params
*Return: char pointer
*/

char *str_concat(char *s1, char *s2)
{
char *a;
int i;
int count;
int o = strlen(s2);
int n = strlen(s1);
int m = n + o + 4;
if (s1 == NULL)
{
return (s2);
}
else if (s2 == NULL)
{
return (s1);
}
else if (s1 && s2)
{
a = malloc(sizeof(char) * m);
count = 0;
for (i = 0; i < n; i++)
{
a[count] = s1[i];
count++;
}

for (i = 0; i < o; i++)
{
a[count] = s2[i];
count++;
}
a[count] = '\0';
return (a);
}
else
{
return (NULL);
}
}


