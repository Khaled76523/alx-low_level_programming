#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function to allocate memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: apointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
