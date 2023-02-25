#include "main.h"

/**
 * _isdigti - check for a digit 0 - 9
 * Return : 1 if the number is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	    return (1);
	else
	    return (0);
}
