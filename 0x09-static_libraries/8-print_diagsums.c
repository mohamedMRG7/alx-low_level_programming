#include "main.h"
#include <stdio.h>

/**
* print_diagsums - check the code
* @s :s
* @a :a
* Return: Always 0.
*/
void print_diagsums(int *a, int s)
{
	int i;
	int sum = 0;

	for (i = 0; i < s; i++)
	{
		sum += *(a + (i * s * 8 + i * 8));
	}
	printf("%d",sum);
	sum = 0;

	for (i = s - 1; i >= 0; i--)
	{
		sum += *(a + i * s + i);
	}

	printf("%d, ",sum);
}
