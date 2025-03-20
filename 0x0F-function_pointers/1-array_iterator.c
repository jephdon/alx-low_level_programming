#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each
 *element of an array
 * @array: array
 * @size: size of array
 * @action: function pointer
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !size || !action)
		return;
	for (i = 0; i < (int)size; i++)
		action(array[i]);
}
