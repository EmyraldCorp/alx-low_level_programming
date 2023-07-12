#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_tab - prints ggg
 * @tab: the arra
 *
 * Return: 0
 */
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * main - check the code
 *
 * Return: 0
 */
int main(void)
{
	char **tab;

	tab = strtow("		ALX School		#cisfun		");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
