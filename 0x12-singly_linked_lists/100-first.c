#include <stdio.h>

void __attribute__((constructor)) first_list_alx(void);

/**
 * first_list_alx - Prints a string before the
 *   main function is executed.
 */
void first_list_alx(void)
{
	printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
