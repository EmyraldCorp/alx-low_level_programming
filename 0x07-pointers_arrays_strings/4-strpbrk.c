#include "main.h"
/**
 * _strpbrk - Searches a string for ay of a set of bytes
 * @s: The string to be searched
 * @accept: The set of byts to be searched for
 *
 * Return: a pointer to the matched bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
