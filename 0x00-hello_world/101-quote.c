#include <unistd.h>
/**
 * main - Entry point of the program
 * Description: This function is the entry point of the program.
 * It prints a message to the standard output and returns an exit code.
 * Return: 1 (indicating an error condition)
*/
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDOUT_FILENO, str, sizeof(str) - 1);
return (1);
}
