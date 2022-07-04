/*
 * =====================================================================================
 *
 *       Filename:  main.h
 *
 *    Description: Header file containing all function prototypes 
 *
 *        Version:  1.0
 *        Created:  7/4/2022 10:34:15 AM
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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
