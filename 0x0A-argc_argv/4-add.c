#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * isnum - check the code
 * @s:argc
 * Return: Always 0.
 */
int isnum(char *s)
{
	int i;

	i = 0;
	while (i < (int)strlen(s))
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}
/**
* main - check the code
* @argc:argc
* @argv : argv
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int i;
	int mul;

	mul = 0;
	for (i = 1; i < argc; i++)
	{
		if (!isnum(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		mul += atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
