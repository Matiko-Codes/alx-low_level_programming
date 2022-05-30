#include "lists.h"
/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t numb = 1;
long int sep;
while (head)
{
sep = head - head->next;
numb++;
printf("[%p] %d\n", (void *)head, head->n);
if (sep > 0)
head = head->next;
else
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}
}
return (numb);
}
