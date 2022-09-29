#include "main.h"

/**
* function - that returns the length of a string.
*
*@autherd by Teklemariam Mossie
*
* returns *s
*/

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
