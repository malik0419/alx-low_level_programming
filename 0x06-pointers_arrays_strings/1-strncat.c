#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: string
 * @src: string
 * @n: integer
 * Return: concantenet string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i))
	{
		i++;
	}

	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = src[j];
		i++;
		j++;
	}
	return (dest);
}
