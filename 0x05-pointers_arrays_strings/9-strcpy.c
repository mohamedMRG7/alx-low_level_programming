#include "main.h"
#include <stdio.h>

/**
* main - check the code
* @s :s
* @d :d
* Return: Always 0.
*/
char *_strcpy(char *d, char *s)
{
	int i = 0;
	while (s != '\0')
		d[i] = s[i];
	return (d);
}
