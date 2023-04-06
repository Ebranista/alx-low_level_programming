#include "main.h"

/**
 * get_bit - returns the value of bit at given index
 * @num: number which contains the bit
 * @index: position at which bit is found
 * Return: bit (success) or -1 (failure)
 */
int get_bit(unsigned long int num, unsigned int index)
{
	int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bit = (num >> index) & 1;

	return (1);
}
