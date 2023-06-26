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
/**
 * puts_half - check the code
 *@s :s
 * Return: Always 0.
 */
void puts_half(char *s)
{
	int len = _strlen(s);
	int i = 0;

	if (len % 2 == 0)
		i = len / 2;
	else
		i = ((len - 1) / 2);
	while (s[i] != 0)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
