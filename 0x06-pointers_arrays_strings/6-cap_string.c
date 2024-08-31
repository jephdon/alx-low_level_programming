#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @ptr: pointer to string
 *
 * Return: ptr.
 */
char *cap_string(char *ptr)
{
	int i, j;
	char wsp[] = " !,.?;(){}\"\n\t";

	/* Capitalize all words after a separator */
	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; wsp[j] != '\0'; j++)
		{
			if (ptr[i] == wsp[j])
			{
				if (ptr[i + 1] >= 'a' && ptr[i + 1] <= 'z')
				{
					ptr[i + 1] -= 32;
					break;
				}
			}
		}
	}
	return (ptr);
}
