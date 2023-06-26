#include "main.h"
#include <stdio.h>

/**
* _puts - check the code
*@s :s
* Return: Always 0.
*/
void _puts(char *s)
{

	int i = 0;

	while (i >= 0)
	{
		_putchar(s[i]);
		if (s[i] == 0)
		{
			_putchar('\n');
			break;
		}
		i++;
	}
}
