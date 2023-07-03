#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* _strchr - check the code
* @s :s
* @c :b
* @n :n
* Return: Always 0.
*/
char *_strchr(char *s, char c)
{
	int i = 0;
	int r = 0;
	char *res = malloc((strlen(s) + 1) * sizeof(char));

	while (s[i] != '\0')
	{
		if (s[i] == c || r > 0)
		{
			res[r] = s[i];
			r++;
		}
		i++;
	}
	return (res);
}
