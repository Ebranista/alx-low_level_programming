#include "main.h"

/**
 * _pow_recursion - raise an integer to an integer
 * @x: number to be raised
 * @y: power
 * Description: power to an integer
 * Return: -1 if y less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
