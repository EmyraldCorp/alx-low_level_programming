#include "main.h"
/**
 * _memcpy - a function that copies a memory area
 *@dest: memory where it is stored
 *@src: memory where it copied
 *@n: number of bytes
 *
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
