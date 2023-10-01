#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

/**
* powerof - check the code
* @num:n
* @pow:p
* Return: Always 0.
*/
int powerof(int num, int pow)
{
	int i, res;

	i = 0;
	res = 1;
	for (i = 0; i < pow; i++)
	{
		res = num * res;
	}
	return (res);
}
/**
* binary_to_uint - check the code
* @b:b
* Return: Always 0.
*/
unsigned int binary_to_uint(const char *b)
{

	unsigned int len, i, res, num;

	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b) - 1;
	i = 0;
	res = 0;
	while (b[i] != '\0')
	{
		num = b[i] - '0';
		if (!isdigit(b[i]))
		{
			return (0);
		}
		res += powerof(2, len) * num;
		i++;
		len--;
	}
	return (res);
}
