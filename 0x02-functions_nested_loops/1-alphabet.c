#include "main.h"
#include <string.h>

/**
 * print_alphabet - Entry point
 *
 * Description: prints print_alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
