#include "main.h"
#include <stdio.h>

/**
* puts2 - check the code
*@s :s
* Return: Always 0.
*/
void puts2(char *s)
{

	int i = 0;

	while (s[i] != 0)
	{
		if (i % 2 == 0)
			_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
