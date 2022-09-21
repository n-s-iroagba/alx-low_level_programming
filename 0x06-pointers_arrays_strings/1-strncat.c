#include "main.h"
#include <string.h>
/**
**_strncat - function
*
*@dest: char parameter
*@src : char parameter
*@n : int parameter
*/

char *_strncat(char *dest, char *src, int n)
{
int len = strlen(dest), i;
for (i = 0; i < n; i++)
{
dest[len] = src[i];
len++;

}
return (dest);
}

