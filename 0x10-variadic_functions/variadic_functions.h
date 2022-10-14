#ifndef VAR_FUNC_H
#define VAR_FUNC_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
* struct my_str - My structure
*
* @fmt: pointer to format which is to be printed.
* @printer: function pointer to select function.
*
*/

typedef struct my_str
{
	char *fmt;
	void (*printer)();

} print_struct;

#endif
