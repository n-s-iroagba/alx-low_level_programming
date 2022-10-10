#include <stddef.h>
#include "dog.h"

/**
*init_dog - function
*@d: struct parameter
*@name: char parameter
*@age:char parameter
*@owner: char parameter
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;


d->name = name;
d->age = age;
d->owner = owner;


}
