#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type describing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/**
 * init_dog - Initializes a dog struct with the given values.
 * @d: Pointer to the dog struct to be initialized.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Name of the dog's owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the name, age, and owner of the given dog struct.
 * @d: Pointer to the dog struct to be printed.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog struct with the given values.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Name of the dog's owner.
 *
 * Return: Pointer to the newly created dog struct.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees the memory allocated for a dog struct.
 * @d: Pointer to the dog struct to be freed.
 */
void free_dog(dog_t *d);

#endif
