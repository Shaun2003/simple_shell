#include "shell.h"

/**
 * bfree - frees pointer and NULLs address
 * @ptr: address of pointer to be freed
 *
 * Return: 1 if freed
 * if not 0
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
