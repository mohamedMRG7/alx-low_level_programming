#include "main.h"
#include <stdio.h>

/**
* _strncat - check the code
* @dest :dest
* @src :src
* @t : n
* Return: Always 0.
*/
char *_strncat(char *dest, char *src, int t)
{
	int num = 0;
	int i = 0;
	int n = 0;

	while (dest[num] != '\0')
		num++;
	i = num;
	while (n < t && src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
