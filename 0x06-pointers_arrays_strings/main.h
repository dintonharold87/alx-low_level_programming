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
int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
