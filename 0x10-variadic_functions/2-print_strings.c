#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @seperator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list varlist;
unsigned int k;
char *str;

va_start(varlist, n);
for (k = 0; k < n; k++)
{

str = va_arg(varlist, char *);
if(str)
printf("%s", str);
else /*if false*/
printf("(nil)");

if (k < n - 1)
if (seperator)
printf("%s", seperator);
}
printf("\n");
va_end(varlist);
}
