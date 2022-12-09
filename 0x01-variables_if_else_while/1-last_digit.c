#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for fuction main goes there */
/**
 *main - entry point

Return: Always 0 (succes)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d if zero\n", n);
	else
		printf("%d if negative\n", n);
	return (0);
}
