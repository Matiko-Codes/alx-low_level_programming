#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure for dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: This is dog struct
 */

struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog doggo;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
doggo *new_dog(char *name, float age, char *owner);
void free_dog(doggo *d);
#endif /*DOG_H*/
