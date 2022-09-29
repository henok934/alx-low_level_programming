#include "main.h"

/**
* factorial - Calculates and returns the factorial of a given number.
*
* number
*
* @n: The string whose factorial of the given number computed.
*
* Return: returns -1 if n is negative, if n is 0 it returns 1,
* otherwise returns n value of factorial.
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

