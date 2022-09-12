#include<stdio.h>

/**
 * main - prints the letters of the alphabet in reverse
 *
 * Return: Always(success)
 */

int main(void)
{
	char n;

	for (n = "z"; n >= "a"; n--)
	{
		putchar(n);
	}
	putchar("\n");

return (0);
}
