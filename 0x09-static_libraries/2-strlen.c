#include "main.h"
#include <stdio.h>

/**
* _strlen - check the code
*@s :s
* Return: Always 0.
*/
int _strlen(char *s)
{

	int i = 0;

	while (i >= 0)
	{
		if (s[i] == 0)
			break;
		i++;
	}
	return (i);
}
