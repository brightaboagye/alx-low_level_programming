#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations
 *              of two digits in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			putchar(n + '0');
			putchar(m + '0');

			if (n != 8 || m != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
