#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialise a variable of type struct dog
 * @d: array
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: dog struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
else
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
