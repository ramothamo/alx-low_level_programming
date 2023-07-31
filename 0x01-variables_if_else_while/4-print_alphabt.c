#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ascii_char = 'a';

	while (ascii_char <= 'z')
	{
		if (ascii_char != 'e' || ascii_char != 'q')
		{
			putchar(ascii_char);
			ascii_char++;
		}
	}
	putchar('\n');
	return (0);
}



