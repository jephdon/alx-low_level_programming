#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, length = 0;

	/* Calculate the length of string*/
	while (str[length] != '\0')
	{
		length++;
	}
	/**
	 * Printing from half of the string
	 * put into consideration strings with
	 * odd numbers
	 */
	for (i = length / 2; i <= length - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
