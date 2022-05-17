#include "variadic_functions.h"
/**
 * sum_them_all - Returns sum of all parameters
 * @n: number of arguments
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list varlist;
int sum = 0;
unsigned int k;

if (n == 0)
return (0);

va_start(varlist, n);
for (k = 0; k < n; k++)
sum += va_arg(varlist, int);

va_end(varlist);
return (sum);
}
