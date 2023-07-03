#include "main.h"
#include <stdio.h>

/**
* _strchr - check the code
* @s :s
* @c :b
* @n :n
* Return: Always 0.
*/
char *_strchr(char *s, char c)
{
	int i;
	char *res;
	int rescount = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c || rescount > 0)
		{
			res[rescount] = s[i];
			rescount++;
		}
	}
	return (res);
}
