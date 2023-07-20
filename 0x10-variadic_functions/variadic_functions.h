#ifndef variadic_func_h
#define variadic_func_h
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

#endif
