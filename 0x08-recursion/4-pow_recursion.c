#include "main.h"

/**
* _pow_recursion - function that returns the value power.
* @x: The integer number whose power to be computed.
* @y: The integer number raised to the power of x.
* Return: returns y is lower than 0, the function should return -1,
* otherwise return x raised to the power of y.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (x);
	y--;
		return (x * _pow_recursion(x, y));
}
