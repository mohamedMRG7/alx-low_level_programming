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
 * print_rev - check the code
 *@s :s
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
