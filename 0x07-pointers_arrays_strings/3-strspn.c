#include "main.h"

/**
 * _strspn - gets length of prefix of prefix substring
 * @s: main string to be scanned
 * @accept: string containing characters to natch
 * Return: The number of bytes in initial segment
 * of s which consist onl of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}
	return (0);
}


