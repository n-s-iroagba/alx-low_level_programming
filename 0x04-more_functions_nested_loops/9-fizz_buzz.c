#include "main.h"
/**
*main- entry point
*Return: 0 (success)
*/

int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if (num % 3 == 0)
{
printf("Fizz");
}
else if  (num % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%i", num);
}
putchar('\n');
}




}
