#ifndef _DOG_H_
#define _DOG_H_
/**
* struct dog - structure that contains dog details.
* @name: name of the dog
* @age: Age of the dog
* @owner: owner of the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
#endif