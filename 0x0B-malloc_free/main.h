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
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
#endif
