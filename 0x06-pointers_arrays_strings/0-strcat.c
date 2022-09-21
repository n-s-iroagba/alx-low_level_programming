#include "main.h"
#include <string.h>
/**
**_strcat - function
*@dest:char parameter
*@src: char parameter
*Return: char value des
*/

char *_strcat(char *dest, char *src)
{
int len = strlen(dest), lensrc = strlen(src), i;
for (i = 0; i < lensrc; i++)
{
dest[len] = src[i];
len++;

}
return (dest);
}
