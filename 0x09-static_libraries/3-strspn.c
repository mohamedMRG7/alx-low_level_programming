#include "main.h"
#include <stdio.h>

/**
* _strspn - check the code
* @s :s
* @a :b
* Return: Always 0.
*/
unsigned int _strspn(char *s, char *a)
{
	int i = 0;
	int z = 0;
	int valid = 0;

	while (s[i] != '\0')
	{
		z = 0;
		valid = 0;
		while (a[z] != '\0')
		{
			if (s[i] == a[z])
			{
				valid = 1;
				break;
			}
			z++;
		}
		if (!valid)
			break;
		i++;
	}
	return (i);
}
