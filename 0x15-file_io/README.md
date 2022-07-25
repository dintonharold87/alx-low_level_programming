# 0x15-file_io
## Requirements
### General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* Don’t forget to push your header file
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* The only C standard library functions allowed are malloc,exit and free.
* Any use of functions like printf, puts, calloc, realloc etc… is forbidden
* All your header files should be include guarded
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...
### Tasks
File 0-read_textfile.c is a function that reads a text file and prints it to the POSIX standard output.

File 1-create_file.c is a function that creates a file.

File 2-append_text_to_file.c is a function that appends text at the end of a file.

File 3-cp.c is a program that copies the content of a file to another file.

File main.h is the header file that contains all these function prototypes.
