#include <stdio.h>

/**
 * print_message - d
 */
void __attribute__((constructor)) print_message(void)
{
	printf("You're beat! and yet, you must allow,\n
I bore my house upon my back!\n");
}
