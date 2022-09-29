#include "main.h"
/**
 *
* factorial.c - Calculates and returns the factorial of a given number.
*
* @s: The string whose factorial of the given number.
*
* Return: returns the factorial of given number.
*
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

