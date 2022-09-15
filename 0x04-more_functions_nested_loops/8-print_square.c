#include"main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
int length = size;

int width = size;

if (size <= 0)
	_putchar('\n');
else
	{
	while (length > 0)
		{
		width = size;

		while (width > 0)
			{
			_putchar('#');
			width--;
			}
		length--;
		_putchar('\n');
		}
	}
}
