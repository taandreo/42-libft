# Libft

Hey ! This is my implementation of the libft header from 42 school (São Paulo - Brazil) !

The tests are not validated by the moulinette :robot: yet, so be careful :)

## make

To compile and make some tests, it's necessary to run `make all` in the root folder. This will create the object files in the root directory, and the libft.a. The `make fclean` will erase all data created by make including the object files.  

## versions

For this particulary project, i used the **clang version 13.0.1** to compile the code, and **valgrind-3.19.0** to catch memory leaks.  

## run

To compile the test code using the library (after make), the command below can be used:
```shell
clang main.c -g -L . -lft -I . && ./a.out
```

or do like me, and create an alias to do all the job in a simple manner:
```shell
runlib='make re > /dev/null && clang main.c -g -L . -lft -I . && ./a.out'
```
This has to be configured in your initialization shell file to be make persistent. Generally `~/bashrc` if you are using bash has your default shell.

## functions

This is a brief summary for the functions that i have written.

### Part 1

| Name        | Summary                                                                                  | Parameters                                                              | status :robot:     |
| ----------- | ---------------------------------------------------------------------------------------- | ----------------------------------------------------------------------- | ------------------ |
| ft\_isalpha | Check if the caracter is alpha                                                           | int ft\_isalpha(int ch)                                                 | ok :green\_circle: |
| ft\_isdigit | Check if the caracter is a digit                                                         | int ft\_isdigit(int ch)                                                 | ok :green\_circle: |
| ft\_isalnum | Check if the caracter is a alphanumeric                                                  | int ft\_isalnum(int ch)                                                 | ok :green\_circle: |
| ft\_isascii | Check if the caracter is in the ascii table                                              | int ft\_isascii(int ch)                                                 | ok :green\_circle: |
| ft\_isprint | Check if the caracter is printable                                                       | int ft\_isprint(int ch)                                                 | ok :green\_circle: |
| ft\_strlen  | Find the size of the string                                                              | ft\_strlen(const char \*s)                                              | ok :green\_circle: |
| ft\_memset  | Set the all bytes of the pointer to carcter caracter 'c'.                                | void \*ft\_memset(void \*s, int c, size\_t n)                           | ok :green\_circle: |
| ft\_bzero   | Set the all bytes of the pointer to zero.                                                | void ft\_bzero(void \*s, size\_t n)                                     | ok :green\_circle: |
| ft\_memcpy  | Copy the bytes from one memory area to another                                           | void \*ft\_memcpy(void \*dest, const void \*src, size\_t n)             | ok :green\_circle: |
| ft\_memmove | Copy the bytes from one memory area to another (the areas may overlap)                   | void \*ft\_memmove(void \*dest, const void \*src, size\_t n)            | ok :green\_circle: |
| ft\_strlcpy | Copy a string to an array                                                                | size\_t ft\_strlcpy(char \*dst, const char \*src, size\_t size)         | ok :green\_circle: |
| ft\_strlcat | Concatenate a string to an array                                                         | size\_t ft\_strlcat(char \*dest, const char \*src, size\_t size)        | ok :green\_circle: |
| ft\_toupper | If c is a lowercase letter, toupper() returns its uppercase equivalent                   | int ft\_toupper(int ch)                                                 | ok :green\_circle: |
| ft\_tolower | If c is an uppercase letter, tolower() returns its lowercase equivalent                  | int ft\_tolower(int ch)                                                 | ok :green\_circle: |
| ft\_strchr  | returns a pointer to the first occurrence of the character c in the string s             | char \*ft\_strchr(const char \*str, int ch)                             | ok :green\_circle: |
| ft\_strrchr | function returns a pointer to the last occurrence of the character c in the string s     | char \*ft\_strrchr(const char \*str, int ch)                            | ok :green\_circle: |
| ft\_strncmp | Compares the two strings s1 and s2, and return an integer as result of the comparasion   | int ft\_strncmp(const char \*lhs, char \*rhs, size\_t count)            | ok :green\_circle: |
| ft\_memchr  | scans the initial n bytes of the memory area pointed to by s for the first instance of c | void \*ft\_memchr(const void \*s, int c, size\_t n);                    | ok :green\_circle: |
| ft\_strnstr | locates the first occurrence of the string little in the string big                      | char \*ft\_strnstr(const char \*big, const char \*little, size\_t len); | ok :green\_circle: |
| ft\_atoi    | transform an string to a int                                                             | int ft\_atoi(const char \*str);                                         | ok :green\_circle: |
| ft\_calloc  | Allocates memory for an array of num elements of size bytes                              | void \*ft\_calloc(size\_t num, size\_t size);                           | ok :green\_circle: |
| ft\_strdup  | returns a pointer to a new string which is a du‐plicate of the string s                  | char \*ft\_strdup(const char \*s);                                      | ok :green\_circle: |

### Part 2


### Bonus


## Contact

Feel free to hit me to talk about the code.

[linkedin](https://www.linkedin.com/in/taandreo/)

**“I'd far rather be happy than right any day.”**