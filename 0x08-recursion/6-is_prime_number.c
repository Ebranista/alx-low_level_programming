#include "main.h"

/**
 * is_divisible - test the wether number is prime or not
 * @n: the number being tested
 * @div: the divisor
 * Description: the function finds wether the nmber is divisible
 * Return: result
 */

int is_divisible(int n, int div)
{
	if (n % div == 0)
	{
		return (0);
	}
	if (div == n / 2)
	{
		return (1);
	}
	return (is_divisible(n, div + 1));
}

/**
 * is_prime_number - is the integer a prime number
 * @n: the number being tested
 * Description:the function tests wether it is prime number
 * and returns the approprieate value
 * Return: result
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	return (is_divisible(n, div));
}
