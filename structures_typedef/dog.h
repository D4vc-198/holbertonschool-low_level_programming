#ifndef DOG_FILE
#define DOG_FILE

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
