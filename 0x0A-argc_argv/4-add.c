#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the addition of positive numbers, followed by a new line
 * @argc: counts argument
 * @argv: argument
 *
 * Return: if number contains only digits 0, else 1
 */
int main(int argc, char *argv[])
{
int num, sum = 0;

for (num = 1; num < argc; num++)
{
if (atoi(argv[num]) != 0)
sum += atoi(argv[num]);

else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);

return (0);
}
