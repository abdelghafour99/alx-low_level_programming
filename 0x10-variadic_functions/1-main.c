#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_numbers(", ", 4, 0, 98, -1024, 402);
	printf("------ 4, 0, 98, -1024, 402-------\n");
	print_numbers(NULL, 4, 304, 76, 87236, 28376);
	printf("------ 4304768723628376-------\n");
	print_numbers("; ", 0);
	printf("------ -------\n");
	print_numbers("; ", 5, 30, 938, -123024, 43402, 0);
	printf("------ 30; 938; -123024; 43402; 0 -------\n");	
	return (0);
}
