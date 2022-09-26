#include "stdio.h"

/**
* _memset - fills memory with a constant byte
* @s: memory space to be filled
* @b: byte to fill with
* @n: number of spaces to fills* Return: pointer to memory area
*
* Return: A pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)

	{

		*(s + i) = b;

	}

	return (s);
}
