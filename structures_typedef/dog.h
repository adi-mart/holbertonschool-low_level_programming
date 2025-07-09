#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - a structure to define a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: This structure defines a dog with its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
