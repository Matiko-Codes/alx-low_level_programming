#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int k;
listint_t *latest;
listint_t *ptr = *head;
latest = malloc(sizeof(listint_t));
if (!latest || !head)
return (NULL);
latest->n = n;
latest->next = NULL;
if (idx == 0)
{
latest->next = *head;
*head = latest;
return (latest);
}
for (k = 0; ptr && k < idx; k++)
{
if (k == idx - 1)
{
latest->next = ptr->next;
ptr->next = latest;
return (latest);
}
else
ptr = ptr->next;
}
return (NULL);
}
