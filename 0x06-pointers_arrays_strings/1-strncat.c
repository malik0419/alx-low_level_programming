#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: string
 * @src: string
 * @n: integer
 * */

char *_strncat(char *dest, char *src, int n)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;

	for (c2 = 0; c2 < n; c2++)
		dest[c++] = src[c2];

	return (dest);
}
