#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - check the code
* @s :s
* Return: Always 0.
*/
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	s = s + 1;
	_puts_recursion(s);
}
