#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i, j, results;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			results = i * j;

			if (j == 0)
			{
				_putchar('0' + results);
			}
			else if (results <= 9)
			{
				_putchar(' ');
				_putchar('0' + results);
			}
			else
			{
				_putchar('0' + results / 10);
				_putchar('0' + results % 10);
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
