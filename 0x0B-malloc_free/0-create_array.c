#include "main.h"
#include <stdlib.h>

/**
 * create_array - create arrar of size and asign char c
 *
 * @size: size of arrar
 * @c: char to assgn
 *
 * Return: pointer to arrar, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
