#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of thr dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef forog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
