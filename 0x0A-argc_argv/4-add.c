#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
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
		if (!isdigit(argv[i][0]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		mul += atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
