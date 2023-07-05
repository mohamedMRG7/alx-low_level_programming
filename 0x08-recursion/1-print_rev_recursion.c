#include "main.h"
#include <stdio.h>
/**
* _print_rev_recursion - check the code
* @s :s
* Return: Always 0.
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_puts_recursion(s + 1);
	_putchar(s[0]);
}
