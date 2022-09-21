#include "main.h"
#include <stdio.h>
/**
*reverse_array -function
*@a : int array
*@n : int parameter
*/
void reverse_array(int *a, int n)
{
int m = n - 1;
while (m >= 0)
{
if (m != n - 1)
{
printf(", ");
}
printf("%i", a[m]);
m--;
}
putchar('\n');

}
