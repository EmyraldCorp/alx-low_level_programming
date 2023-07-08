#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints result of multiplication
 * @argc: array size
 * @argv: array conatining elements
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int arg = argc - 1;

	if (arg != 2)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
