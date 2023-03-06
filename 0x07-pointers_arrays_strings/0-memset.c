#include "main.h"

/**
 * _memset - fills memory with constant type
 * @s: printer with byte buffer
 * @b: constant byte
 * @n: number of buffer spaces to be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
}
return (s);
}
