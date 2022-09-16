#include "main.h"
/**
 *_isdigit - checks if input is digit between 0 - 9
 *
 * @c: input
 *
 * Return: 1 if is digit, 0 if not
*/
int _isdigit(int c)
{
char item;

for (item = '0'; item <= '9'; item++)
{
if (item == c)
return (1);
return (0);

}

}
