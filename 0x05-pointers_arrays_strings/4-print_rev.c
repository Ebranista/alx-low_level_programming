#include "main.h"
/**
 * print_rev - printes the reversed string
 * @s - string to be reversed
 * Return: void
 */

void print_rev(char *s)
{
int index = 0;
while (s[index])
	index++;
while (index--)
{
	_putchar(s[index]);
}
_putchar('\n');
}
