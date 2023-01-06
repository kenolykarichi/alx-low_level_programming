#include "main.h"
/**
 * help -checks if the sqrt of number exits
 * @num: number.
 * @psqrt: poissible sqrt of number.
 *
 * Return: sqrt of number to -1 for error.
 */
int help(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > num)
			return (-1);
		else
			return (help(num, psqrt + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to find sqrt of.
 *
 * Return: squareroot of n.
 * -1 if n does not have a natural sqrt.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (help(n, 0));
}
