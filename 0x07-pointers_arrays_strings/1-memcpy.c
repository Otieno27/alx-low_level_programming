#include "main.h"

/**
 * _memcpy - copies @n bytes from memory @src to memory
 * 	     area @dest
 * @src: copy from
 * @dest: copy to
 * @n: number of bytes to be copied
 *
 * Return: pointer to the destination
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];

	return (dest);
}
