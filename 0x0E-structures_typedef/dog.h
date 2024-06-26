#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains details about a group of dogs
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owneer of the dog
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/*
 *dog_t *new_dog(char *name, float age, char *owner);
 *void free_dog(dog_t *d);
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
