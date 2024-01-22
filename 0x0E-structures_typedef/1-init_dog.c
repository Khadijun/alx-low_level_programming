#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * init_dog - a function that initialize a variable of type struct dog
  * @d: a new type of dog
  * @name: the name of the dog
  * @age: the age of the dog
  * @owner: the owner of the dog
  *
  * Description: the seecond type of dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{


	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);

	if (d->name != NULL && d->owner != NULL)
	{
		strcpy(d->name, name);
		d->age = age;
		strcpy(d->owner, owner);
	}
	else
	{
		printf("ERROR\n");
	}
}

