#include "main.h"

/**
 * Prints out the lowercase letter from a - z
 *
 * Returns (0)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
