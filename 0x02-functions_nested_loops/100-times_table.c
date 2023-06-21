#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number up to which the times table is printed.
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (j != 0)
					printf(",");
				printf("%-3d", result);
			}
			printf("\n");
		}
	}
}
