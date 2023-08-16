#include "main.h"
/**
 * _abs- Entry point
 * @c: computes the absolute value of an integer
 * Return: absolute value
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
