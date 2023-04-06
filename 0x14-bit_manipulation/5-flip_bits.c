#include "main.h"

unsigned int get_length(unsigned long int num);

/**
 * flip_bits - returns the number of bits to flipped int n to give m
 * @n: first number
 * @m: second number
 * Return: number of bits to flipped in both numbers to make them equal
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count, length1, length2, total_length;
	int bit1, bit2;

	length1 = get_length(n);
	length2 = get_length(m);
	total_length = (length1 > length2) ? length1 : length2;

	count = 0;
	for (i = 0; i < total_length; i++)
	{
		bit1 = n & 1;
		bit2 = m & 2;
		if (bit1 != bit2)
			count++;
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
/**
 * get_length - returns the number of bits in a number
 * @num: number to consider
 * Return: length of number
 */
unsigned int get_length(unsigned long int num)
{
	unsigned int count;

	if (num == 0)
		return (1);
	for (count = 0; num != 1; count++)
		num >>= 1;
	return (count);
}


