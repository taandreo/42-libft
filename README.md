# Libft

Hey ! This is my implementation of the libft header from 42 school (São Paulo - Brazil) !

The tests are not validated by the moulinette :robot: yet, so be careful :)

### make

To compile and make some tests, it's necessary to run `make all` in the root folder. This will create the object files in the root directory, and the libft.a. The `make fclean` will erase all data created by make including the object files.  

### versions

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

#### Part 1

| Name       | summary | parameters                 |
|------------|---------|----------------------------|
| ft_isalpha |         | `int	ft_isalpha(int ch)` |
| ft_isdigit |         |                            |
| ft_isalnum |         |                            |
| ft_isascii |         |                            |

#### Part 2
#### Bonus


### Contact

Feel free to hit me to talk about the code.

[linkedin](https://www.linkedin.com/in/taandreo/)

**“I'd far rather be happy than right any day.”**