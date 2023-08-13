#include <stdio.h>
/**
 * main- Entry point
 * Description: print combination of single digits
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 57)
		{
			break;
		}
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
