#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int k;
char *str;
va_start(list, n);
for (k = 0; k < n; k++)
{
str = va_arg(list, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
if (k < n - 1)
if (separator)
printf("%s", separator);
}
printf("\n");
va_end(list);
}
