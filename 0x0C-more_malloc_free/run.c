#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	char *concat;
	(void)argc;
	concat = string_nconcat("Best ", NULL, atoi(argv[1]));
	printf("%s\n", concat);
	free(concat);
	return (0);
}
