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
	*d = {0};

	while (d[i] != 0)
	{
		_putchar(d[i]);
		d[i] = '\0';
	}
	i = 0;
	while (s[i] != 0)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
