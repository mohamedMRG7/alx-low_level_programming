#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[3] = "dss";
	char *ptr;

	ptr = _strcpy(s1, "Z\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}
