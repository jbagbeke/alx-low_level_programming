#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a function that will be used in my task code
 * @name: Name to be entered
 * @age: age of dog
 * @owner: The ownwer dog
 * Description: Struct is for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/*my_dog - typedef for struct dog*/
typedef struct dog my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /*DOG_H*/
