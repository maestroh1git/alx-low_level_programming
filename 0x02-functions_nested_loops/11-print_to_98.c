#include <stdio.h>
#include main.h

/**
 * print_to_98 -Print from n to 98
 * @n: A input integer
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line.
 * Return: print from n to 98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
	}
	else
		{
			for (; n >= 98; n--)
			{
				printf("%d", n);
				if (n == 98)
					continue;
				printf(", ");
			}
		}

	printf("\n");
}
