#include "main.h"

/**
 * print_diagonal - Print diagonal with \ (92 in ASCII)
 * @n: how many diagonals
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int count;
	int fill;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			for (fill = 0; fill < count; fill++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
