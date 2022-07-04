#include <stdio.h>
#include "dog.h"
/**
* print_dog-function that prints a struct dog
* struct dog -structure of type dog
* @d:pointer to a structure
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: %s\n", "(nil)");
		if (d->age >= 0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: %s\n", "(nil)");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: %s\n", "(nil)");
	}
}
