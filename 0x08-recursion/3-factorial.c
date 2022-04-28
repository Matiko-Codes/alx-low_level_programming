#include "main.h"
/**
 *factorial - factorial of a given number
 *@n: pointer block of memory to fill
 *Return: factorial
 */
int factorial(int n)
{
if (n == 0)
return (1); /*first base condition*/
else if (n < 0)
return (-1); /*second base condition*/
else
return (n * factorial(n - 1)); /*the recursive call*/
}
