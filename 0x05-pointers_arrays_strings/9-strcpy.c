#include "main.h"
#include <stdio.h>

/**
* _strcpy - check the code
* @s :s
* @d :d
* Return: Always 0.
*/
char *_strcpy(char *d, char *s)
{
	int i = 0;

	while (d[i] != 0)
	{
		d[i] = '\0';
		i++;
	}
	i = 0;
	while (s[i] != 0)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
