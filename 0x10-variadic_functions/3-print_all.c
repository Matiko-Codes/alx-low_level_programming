#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
va_list list;
unsigned int k = 0, j, c = 0;
char *str;
const char t_arg[] = "cifs";
va_start(list, format);
while (format && format[k])
{
j = 0;
while (t_arg[j])
{
if (format[k] == t_arg[j] && c)
{
printf(", ");
break;
} j++;
}
switch (format[k])
{
case 'c':
printf("%c", va_arg(list, int)), c = 1;
break;
case 'i':
printf("%d", va_arg(list, int)), c = 1;
break;
case 'f':
printf("%f", va_arg(list, double)), c = 1;
break;
case 's':
str = va_arg(list, char *), c = 1;
if (!str)
{
printf("(nil)");
break;
}
printf("%s", str);
break;
} k++;
}
printf("\n"), va_end(list);
}
