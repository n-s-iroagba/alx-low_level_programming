#include<stdio.h>

/**
 * main - entry point
 *
 *
 *
 * Return: 0 (successful)
 *
*/

void prime(void)
{
long n = 612852475143;
int i;
long x = n / 3;
int prime = 1;
for (i = 1; i <= x; i++)
{
if ((n % i == 0) &&  i > prime)
{
prime = i;
}

}
printf("%d", prime);
}
