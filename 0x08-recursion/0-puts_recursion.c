#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - check the code
* @s :s
* Return: Always 0.
*/
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
