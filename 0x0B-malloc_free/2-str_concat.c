#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memor of an arra using malloc
 * @nmemb: number of elements in arra
 * @size: size of elements of arrar
 *
 * Return: pointer to memeor alocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}
	return (p);
}

