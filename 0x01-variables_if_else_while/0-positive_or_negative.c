#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description : 'Check the number if it is positive or negative'
 * Return : always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("% iis positive\n", n);
	}
	else if (n == 0)
	{
		printf("% iis zero\n", n);
	}
	else
	{
		printf("% iis negative\n", n);
	}
	return (0);
}

