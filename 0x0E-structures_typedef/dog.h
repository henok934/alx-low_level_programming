#ifndef DOG_H
#define DOG_H

/**
* struct dog - main struct
* @name: First member
* @age: Second member
* @owner: Third member
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif