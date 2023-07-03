#include "main.h"
/**
 * _memset - fill a block of memory with a speciic value
 * @s: starting address
 * @b: the desired value
 * @n: number of bytes to be chnaged
 *
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; n > 0; n++)
	{
		s[i] = b;
	}
	return (s);
}

