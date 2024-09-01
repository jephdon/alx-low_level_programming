#include "main.h"

/**
 * leet - encodes a string into 1337
 * @ptr: pointer to string
 *
 * Return: ptr
 */
char *leet(char *ptr)
{
	int i, j;
	char ls[] = "aAeEoOtTlL";
	char ns[] = "4433007711";

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; ls[j] != '\0'; j++)
		{
			if (ptr[i] == ls[j])
				ptr[i] = ns[j];
		}
	}
	return (ptr);
}
