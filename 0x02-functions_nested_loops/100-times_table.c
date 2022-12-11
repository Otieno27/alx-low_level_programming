include "main.h"

/**
 * print_times_table - prints the times table of the input
 * starting with 0
 * @n: value to be printed
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	for (int i = 0; i <= 9; i++)
	{
		int product = n * i;

		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(' x ');
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		_putchar(' = ');

		if (product < 10)
			_putchar(' ');
		else
			_putchar(product / 10 + '0');

		_putchar(product % 10 + '0');

		if (i < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}

