#ifndef STRUCTURES_TYPEDEF_H
#define STRUCTURES_TYPEDEF_H
/**
 * struct dog - dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: dog structure
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif

#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
