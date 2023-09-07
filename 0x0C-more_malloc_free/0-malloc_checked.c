#include <stdlib.h>
#include "main.h"

/**
* *malloc_checked - memory is allocated using malloc 
* @b: amount of memory to allocate in bytes
*
* Return: a reference to the memory that has been allocated
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	exit(98);

	return (ptr);
}

