#include<stdio.h>

/**
* main - functon returns the value of argc and argv.
*
*@argc: returns the value of the argc.
*of the array argv
*@argv: returns only for in array value.
*
*return: the value return.
*
*/

int main(int argc, char **argv)
{
	if (argc)
		printf("%s", *argv);
	return (0);
}
