#include "main.h"
#include <string.h>
/**
**_strncpy - function
*@dest : char parameter
*@src : char parameter
*@n : int parameter
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];

}
return (dest);




}
