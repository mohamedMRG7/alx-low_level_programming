#include "main.h"
#include <stdio.h>

/**
* _strcat - check the code
* @dest :dest
* @src :src
* Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
	int num = 0;
	int i = 0;
	int n = 0;

	while (dest[num] != '\0')
		num++;
	i = num;
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
    	return (dest);
}
