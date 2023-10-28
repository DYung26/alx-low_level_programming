#include "main.h"
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: 0 upon successful execution.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		int len = 0;

		while (argv[len] != NULL)
			len++;
		printf("%d\n", len);
	}
	return (0);
}
