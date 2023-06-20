#include "main.h"
/**
 * _abs - Computes the absolute alue
 * of an integer
 *
 * @i: input number as an integer
 *
 * Return: absolute alue
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
