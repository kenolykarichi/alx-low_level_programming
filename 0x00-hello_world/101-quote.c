#include <unistd.h>

/**main - prints "and of art is useful" - Dora Korpar, 2015-10-19",
 * followed by a newline, to standard error
 * Return: Alwayss 1.
 */

int main(void)
{
	write(2, "and that peace of art is useful\" -Dora Kopar, 2015-10-19\n", 59);
	return (1);
}
