#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ascii_char = 'z';

	while (ascii_char >= 'a')
	{
		putchar(ascii_char);
		ascii_char--;
	}
	putchar('\n');
	return (0);
}



