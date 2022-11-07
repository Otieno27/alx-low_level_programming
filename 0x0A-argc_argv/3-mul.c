#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the multiplication of two integers
 * @argc: counts argument
 * @argv: argument
 *
 * Return: if true 0, else 1
 */
int main(int argc, char *argv[])
{
int a, b;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}
printf("Error\n");
}
