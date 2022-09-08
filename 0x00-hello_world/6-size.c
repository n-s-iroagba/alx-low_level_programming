#include <stdio.h>
/**
*main - entry point
*Return: 0 on success
*/
int main(void)
{
char a;
int b;
long c;
long int d;
float e;
printf("Size of a char: %u byte(s)\n", sizeof(a));
printf("Size of an int: %u byte(s)\n", sizeof(b));
printf("Size of a long: %u byte(s)\n", sizeof(c));
printf("Size of a long long int: %u byte(s)\n", sizeof(d));
printf("Size of a float: %u byte(s)\n", sizeof(f));
return (0);
}
