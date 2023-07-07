#include <stdio.h>
/**
 * main -  prints all argument passed in command line
 * @argc: array size
 * @argv: array containing elements
 *
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
