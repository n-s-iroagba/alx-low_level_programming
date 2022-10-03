#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
*_strdup(char *str)- function
*@str: char parameter
*Return: char pointer value
*/

char *_strdup(char *str)
{
int i;
char *a;
if (str == NULL)
{
return (NULL);
}
else
{
for (i = 0; str[i] != '\0'; i++)
{
i++;
}
i++;

a = malloc(sizeof(char) * i);

if (!a)
{
return (NULL);
}


for (i = 0; str[i] != '\0'; i++)
{
a[i] = str[i];
}
a[i] = '\0';
return (a);
}
}
