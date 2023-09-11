#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog with the following elements
 * @name: char * name, first element
 * @age: float age, second elementmember
 * @owner: char owner, third element
 * Return: __
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - type struct dog
 */

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
