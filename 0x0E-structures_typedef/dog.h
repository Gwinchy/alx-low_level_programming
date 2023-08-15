#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog data
 *
 * @name: name of the dog
 * @age : age of the dog
 * @owner: dog's owner
 *
 * Description: Defines metadata about
 * the dog and type of dog's struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
