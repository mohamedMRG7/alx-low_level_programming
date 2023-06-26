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
 * rev_string - check the code
 *@s :s
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len = _strlen(s) - 1;
	int i = 0;

	while (len != i)
	{
		char t = s[i];

		s[i] = s[len];
		s[len] = t;
		len--;
		i++;
	}
}
