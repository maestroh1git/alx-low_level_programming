#include "main.h"

/**
 * print_square - print square
 * @size: The size of the square
 *
 * Return: Always 0
 */

void print_square(int size)
{
	int rows;
	int column;

	if (size > 0)
	{
		for (column = 0; column < size; column++)
		{
			for (rows = 0; rows < size; rows++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
