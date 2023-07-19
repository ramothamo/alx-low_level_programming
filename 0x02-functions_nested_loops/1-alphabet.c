#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
	char c = 97;

	while (c < 123)
	{
		_putchar(c);
		c = c + 1;

	}
	_putchar('\n');

}

