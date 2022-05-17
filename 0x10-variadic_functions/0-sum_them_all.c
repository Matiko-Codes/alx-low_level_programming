#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Returns sum of all parameters
 * @n: number of arguments
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int sum = 0;
unsigned int i;

va_start(ap, i);
for (i = 0; i < n; i++)
{
sum += va_arg(valist, int);
}
va_end(ap);
return (sum);
}
