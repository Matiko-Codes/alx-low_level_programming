#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @seperator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: No return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list varlist;
unsigned int k;

va_start(varlist, n);
for (k = 0; k < n; k++)
{
printf("%d", va_arg(varlist, int));
if (separator && k < n - 1)
printf("%s", seperator);
}
printf("\n");

va_end(varlist);
}
