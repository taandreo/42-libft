# Libft

Hey ! This is my implementation of the libft header from 42 school (São Paulo - Brazil) !

The tests are not validated by the moulinette yet, so be careful :)

### make

To compile and make some tests, it's necessary to run `make all` in the root folder. This will create the object files in the root directory, and the libft.a. The `make fclean` will erase all data created by make including the object files.  

### versions

For this particulary project, i used the **clang version 13.0.1** to compile the code, and **valgrind-3.19.0** to catch memory leaks.

To compile some code using the library, you can use the command bellow:

```
clang main.c -g -L . -lft -I . && ./a.out
```

or create a alias to do all the job in a simple manner:

```
unlib='make re > /dev/null && clang main.c -g -L . -lft -I . && ./a.out'
```

## functions

Now the fun begins. This is a brief summary for the functions that i have written.

### Contact

Feel free to hit me to talk about the code, with the contact options below.

linkedin link here

**“I'd far rather be happy than right any day.”**