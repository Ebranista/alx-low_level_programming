#include<unistd.h>

/**
* _putchar   - writes the character c to stdout
* Description: It writes the character c to standard out
* @c: the character to printed
* Return: the character else 0.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}


