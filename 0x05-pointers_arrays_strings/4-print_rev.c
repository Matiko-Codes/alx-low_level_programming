#include "main.h"
/**
 * print_rev - prints a string in reverse order
 *@s: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */
void print_rev(char *s)
{
int x;
x = 0;
while (s[x] != '\0')
{
x++;
}
for (x = x - 1; x >= 0; x--)
{
_putchar (s[x]);
}
_putchar ('\n');
}
