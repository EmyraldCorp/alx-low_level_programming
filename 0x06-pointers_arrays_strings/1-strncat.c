#include "main.h"
/**
 * _strncat - concatenates 2 strings but add imputted nummber of bytes
 *
 * @dest: string to be appended on
 * @src: string to be completed
 * @n: integer parameter
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
