#include <stdio.h>
/**
 * main - entry point
 * Description: computes and prints the evenn numbers less than
 * 4,000,000
 * Return: Always(success)
 */

int main(void)
{
	int sum = 0;
	int a = 0, b = 1, next;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
		{
			sum += next;
		}
	}
	printf("%i\n", sum);
	return (0);
}
