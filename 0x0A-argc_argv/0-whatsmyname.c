#include <stdio.h>
#include "main.h"

/**
 * main - prints program name followed by a new line
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", argv[0]);

return (0);
}