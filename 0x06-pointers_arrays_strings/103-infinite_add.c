#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*infinite_add - function
*@n1:char parameter
*@n2:char parameter
*@r :int parameter
*@size_r : int parameter
*Return: char value of added sum
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int max =  len1 > len2 ? len1 : len2;
if ((max + 1) >= (size_r))
{
return (0);
}
else
{

int sum, num1, num2;
num1 = atoi(n1);
num2 = atoi(n2);
sum = num1 + num2;
printf("%i", sum);
*r = sum + '0';
return (r);

}
}
