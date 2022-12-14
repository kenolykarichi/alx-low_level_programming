#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: The number
 * Return: value  of the last digit
 */
int print_last_digit(int n)
{
	int id = n % 10;

	if (id < 0)
		id *= -1;

	_putchar(id + '0');

	return (0);
}
