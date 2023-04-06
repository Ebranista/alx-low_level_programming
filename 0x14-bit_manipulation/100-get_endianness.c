#include "main.h"
/**
 * get_endianness - checks the indianness
 * Return: 0 if big indian, 1 if little indian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
