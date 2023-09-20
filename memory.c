#include "shell.h"

/**
 * bfree - it frees the  pointer and NULLs the address
 * @ptr: address of the pointer to free
 *
 * Return: if freed 1, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
