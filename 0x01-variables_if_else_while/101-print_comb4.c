#include<stdio.h>
/**
 * main - prints all possible combinations of 3 decimals
 *
 * Return: Always (success)
 */

int main(void)
{
	int c, g, i;

	for (c = '0'; c <= '9'; c++)
	{
		for (g = '0'; g <= '9'; g++)
		{
			for (i = '0'; i <= '9'; i++)
			{
				if (c < g && g < i)
				{
					putchar(c);
					putchar(g);
					putchar(i);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

return (0);
}
