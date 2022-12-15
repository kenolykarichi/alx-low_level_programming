#include <stdio>

/**
 * main -prints all possibible different combinations of two digits
 *
 * Return Always 0 (success)
 *
 */
int main(void)

{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '0'; tens++)
	{
		for (ones = '0'; ones <= '0'; ones++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))
			 {
				 putchar(',');
				 putchar(' ');
			 }
			}
		}
	}

	putchar('\n');
	
	return (0);
}

