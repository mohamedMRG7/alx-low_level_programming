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

	mul = 1;
	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	for (i = 1; i < argc; i++)
		mul *= atoi(argv[i]);
	printf("%d\n", mul);
	return (0);
}
