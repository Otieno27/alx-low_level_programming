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
int a, b, prod;
if (argc != 3)
{
printf("Error\n");
return (1);
}

a = atoi(argv[1]);
b = atoi(argv[2]);
prod = a * b;

printf("%d\n", prod);

return (0);
}
