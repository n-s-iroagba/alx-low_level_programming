x#include"main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _ character
 *     should be printed
*/


int print_line(int n)
{
if (n <= 0)
	{
	_putchar('\n');
	return (0);
	}
else
	{
	while (n > 0)
		{
		_putchar('_');
		n--;
		}
	_putchar('\n');
	return (0);
	}
}
