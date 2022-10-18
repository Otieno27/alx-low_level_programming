#include <stdio.h>
int main(void)
{
	printf("size of a char: %zu byte(s)\n", sizeof(1));
	printf("size of an int: %zu byte(s)\n", sizeof(4));
	printf("size of a long int: %zu byte(s)\n", sizeof(4));
	printf("size of a long long int: %zu byte(s)\n", sizeof(8));
	printf("size of a float: %zu byte(s)\n", sizeof(4));

	return (0);
}
