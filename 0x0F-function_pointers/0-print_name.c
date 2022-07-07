#include "function_pointers.h"
/**
* print_name-function that prints a name
* @name:the name to be printed
* @f:function pointer to the function to be called
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}