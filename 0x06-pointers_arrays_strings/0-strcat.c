#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
	int num = 0;
	int i = 0;
	int n = 0;
	while (dest[num] != '\0')
		num++;
	i = num + 1;
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
    return (dest);
}
