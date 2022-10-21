#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 *
 * Return: 1 if the number is a digit,, otherwise 0
 */
int_isdigit(int c)
{
	if (c >= '48' && c <= '57')
		return (1);

	else
		return (0);
}
