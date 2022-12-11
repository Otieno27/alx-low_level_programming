#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, separated by a comma and a
 *        space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long prev = 0, cur = 1, next;

	for (i = 0; i < 50; i++)
	{
		if (i > 0)
	{
		printf(", ");
	}

		printf("%lu", cur);

		next = prev + cur;
		prev = cur;
		cur = next;
	}

	printf("\n");

	return (0);
}

