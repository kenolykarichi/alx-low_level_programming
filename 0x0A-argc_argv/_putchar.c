#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: On succecc 1.
 * O error, -1 return, and errno is set appropriatly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
