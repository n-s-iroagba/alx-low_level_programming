#include "main.h"
#include <stdlib.h>


/**
 * create_array - Creates an array and assigns it values
 * @size: This is the size of the array
 * @c: This is the char it should be filled with
 *
 * Return: Null if no memory or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
int i;
char *a = malloc(sizeof(char) * size);
for (i = 0; i < size; i++)
{
a[i] = c;
}
 return (a);
}
