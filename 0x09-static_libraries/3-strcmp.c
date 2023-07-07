#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
int _strcmp(char *s1, char *s2)
{
	int sum;
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		sum += (s1[i] - s2[i]);
		printf("%d : ",(s1[i] - s2[i]));
		i++;
	}
    return (sum);
}
