#include "main.h"

/**
 * get_endianness - ..a function that checks the endianness.
 * Return: ..
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
