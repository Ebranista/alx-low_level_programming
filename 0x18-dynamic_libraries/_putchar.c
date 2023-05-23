#include<unistd.h>

/**
* _putchar   - writes the character c to stdout
* @c: character c
* Return: returns if success
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}

