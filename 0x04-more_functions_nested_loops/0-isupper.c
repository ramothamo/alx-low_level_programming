#include "main.h"

/**
  * _isupper - Check if a character is upper
  * @c: The number to be checked
  *
  * Return: 1 for upper case character and 0 for lower case character
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
