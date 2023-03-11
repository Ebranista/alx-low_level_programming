#include "main.h"
#include <stdio.h>

/**
 * main - this is the function to prints its name
 * @argc: argc parameter
 * @argv: an array of a command list
 * Return: 0 for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
