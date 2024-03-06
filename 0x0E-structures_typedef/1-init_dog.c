#include <stdio.h>
#include "dog.h"


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
	d->name = name;
	d->age = age;
	d->owner = owner;
}



















