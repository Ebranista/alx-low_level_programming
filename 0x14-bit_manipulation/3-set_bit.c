#include "main.h"

/**
 * set_bit - set specific bit at specific position
 * @num: the pointer to which the bit being set
 * @index: the position for which the bit is placed
 * Return: 1 if success, -1 if failure
 */
int set_bit(unsigned long int *num, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mask <<= index;
	*num = *num | mask;
	return (1);
}

