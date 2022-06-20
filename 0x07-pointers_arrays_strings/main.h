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
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

