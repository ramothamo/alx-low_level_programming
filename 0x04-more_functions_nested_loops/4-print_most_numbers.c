#include "main.h"

/**
  * print_most_numbers - Print the numbers from 0 to 9 excluding 2 and 4
  *
  * Return: The numbers from 0 up to 9 skipping 2 and 4
  * Each number is printed as a single character
  */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
