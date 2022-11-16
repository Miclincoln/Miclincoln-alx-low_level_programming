#ifndef _DOG_H_
#define _DOG_H_
/**
* struct dog - Defined structure
* @name: member of the struct dog
* @age: member of the struct dog
* @owner: member of the struct dog
**/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *);

dog_t *new_dog(char *, float, char *);

void free_dog(dog_t *d);
#endif
