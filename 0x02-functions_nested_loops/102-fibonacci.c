#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints first 50 fibonacci numbers,starting with 1 and 2,
 *	 separated by a comma followed by a space.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	unsigned long fb1 = 0, fb2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fb1 + fb2;
		printf("%lu", sum);

		fb1 = fb2;
		fb2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
