#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
*main - entry point
*Return: 0 (if successfull)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int sld = n % 10;
if (ld > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, ld);

}
else if (ld < 6 && ld > 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
}
else
{
printf("Last digit of %d is %d and is 0", n, ld);
}
return (0);
}
