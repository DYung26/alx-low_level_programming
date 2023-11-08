#include "function_pointers.h"
/**
 * print_name - Prints a name using a function pointer
 * @name: The name to be printed
 * @f: A function pointer to a function that takes a character pointer
 * as its parameter and returns void.
 * This function is used to print the name.
 */
void print_name(char *name, void (*f)(char *))
	f(name);
