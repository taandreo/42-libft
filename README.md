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
| Name        | Description                                                                              | Parameters                                                              | status :robot:     |
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
| Name            | Description                                                                                   | Parameters                                                                     | status :robot:     |
| --------------- | --------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------ | ------------------ |
| ft\_substr      | returns a substring from the string ’s’                                                       | char \*ft\_substr(char const \*s, unsigned int start, size\_t len);            | ok :green\_circle: |
| ft\_strjoin     | returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.              | char \*ft\_substr(char const \*s, unsigned int start, size\_t len)ft\_strjoin; | ok :green\_circle: |
| ft\_strtrim     | returns a copy of ’s1’ with the characters in ’set’ removed from the beginning and the end.   | char \*ft\_strtrim(char const \*s1, char const \*set);                         | ok :green\_circle: |
| ft\_split       | returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. | char \*\*ft\_split(char const \*s, char c);                                    | ok :green\_circle: |
| ft\_itoa        | returns a string representing the integer received as an argument.                            | char \*ft\_itoa(int n);                                                        | ok :green\_circle: |
| ft\_strmapi     | Applies the function ’f’ to each character of the string ’s’                                  | char \*ft\_strmapi(char const \*s, char (\*f)(unsigned int, char));            | ok :green\_circle: |
| ft\_striteri    | Applies the function ’f’ on each character of the string passed as argument                   | void ft\_striteri(char \*s, void (\*f)(unsigned int, char\*));                 | ok :green\_circle: |
| ft\_putchar\_fd | Outputs the character ’c’ to the given file descriptor.                                       | void ft\_putchar\_fd(char c, int fd);                                          | ok :green\_circle: |
| ft\_putstr\_fd  | Outputs the string ’s’ to the given file descriptor.                                          | void ft\_putstr\_fd(char \*s, int fd);                                         | ok :green\_circle: |
| ft\_putendl\_fd | Outputs the string ’s’ to the given file descriptor followed by a newline.                    | void ft\_putendl\_fd(char \*s, int fd);                                        | ok :green\_circle: |
| ft\_putnbr\_fd  | Outputs the integer ’n’ to the given file descriptor.                                         | void ft\_putnbr\_fd(int n, int fd);                                            | ok :green\_circle: |

### Bonus
| Name              | Description                                                                                         | Parameters                                                                         | status :robot:     |
| ----------------- | --------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------- | ------------------ |
| ft\_lstnew        | Allocates and returns a new node in the list.                                                       | t\_list \*ft\_lstnew(void \*content);                                              | ok :green\_circle: |
| ft\_lstadd\_front | Adds the node ’new’ at the beginning of the list.                                                   | void ft\_lstadd\_front(t\_list \*\*lst, t\_list \*new);                            | ok :green\_circle: |
| ft\_lstsize       | Counts the number of nodes in a list.                                                               | int ft\_lstsize(t\_list \*lst);                                                    | ok :green\_circle: |
| ft\_lstlast       | Returns the last node of the list.                                                                  | t\_list \*ft\_lstlast(t\_list \*lst);                                              | ok :green\_circle: |
| ft\_lstadd\_back  | Adds the node ’new’ at the end of the list.                                                         | void ft\_lstadd\_back(t\_list \*\*lst, t\_list \*new);                             | ok :green\_circle: |
| ft\_lstdelone     | Frees the memory ofthe node’s content using the function ’del’                                      | void ft\_lstdelone(t\_list \*lst, void (\*del)(void\*));                           | ok :green\_circle: |
| ft\_lstclear      | Deletes and frees the given node and every successor of that node                                   | void ft\_lstclear(t\_list \*\*lst, void (\*del)(void\*));                          | ok :green\_circle: |
| ft\_lstiter       | Iterates the list ’lst’ and applies the function ’f’ on the content of each node.                   | void ft\_lstiter(t\_list \*lst, void (\*f)(void \*));                              | ok :green\_circle: |
| ft\_lstmap        | Iterates the list ’lst’ and applies the function ’f’. Creates a new list resulting the applications | t\_list \*ft\_lstmap(t\_list \*lst, void \*(\*f)(void \*), void (\*del)(void \*)); | ok :green\_circle: |

## Contact

Feel free to hit me to talk about the code.

[linkedin](https://www.linkedin.com/in/taandreo/)

**“I'd far rather be happy than right any day.”**