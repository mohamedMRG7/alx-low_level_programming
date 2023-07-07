#include "main.h"
#include <stdio.h>

/**
* _memcpy - check the code
* @s :s
* @b :b
* @n :n
* Return: Always 0.
*/
char *_memcpy(char *b, char *s, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		b[i] = s[i];
	}
	return (b);
}
