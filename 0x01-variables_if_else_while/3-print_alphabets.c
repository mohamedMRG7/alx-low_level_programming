#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122 ; i++)
	{
		putchar(i);
		if (i == 122)
			for (int s = 65; s <= 90; s++)
			{
				putchar(s);
				if (s == 90)
				{
					putchar(10);
				}
			}
	}
	return (0);
}
