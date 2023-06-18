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
	int n;
	int m;
	
	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
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
