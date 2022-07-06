#ifndef __FUNCTION__POINTER_H__
#define __FUNCTION__POINTER_H__
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));


#endif /* __FUNCTION__POINTER_H__ */