/*
 * =====================================================================================
 *
 *       Filename:  main.h
 *
 *    Description: Header file containing all function prototypes 
 *
 *        Version:  1.0
 *        Created:  06/15/2022 10:34:15 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dinton Harold Ainemukama (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef _MAIN_H_
#define _MAIN_H_
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
char *_memset(char *s, char b, unsigned int n);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);

#endif
