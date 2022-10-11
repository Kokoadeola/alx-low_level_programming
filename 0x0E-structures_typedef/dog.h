#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dogs
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: Data type that can be used to represent a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef of struct dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Description: alias for type struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
