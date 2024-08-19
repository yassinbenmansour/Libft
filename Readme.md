<br />
<p align="center">
  <a href="https://raw.githubusercontent.com/othneildrew/Best-README-Template/master/images/logo.png">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/8d/42_Logo.svg/1200px-42_Logo.svg.png" alt="Logo" width="250" height="250">
  </a>

  <h3 align="center">42-Libft</h3>

  <p align="center">
    Projet Libft (42cursus) 2024
    <br />
    <br />
    <br />
  </p>
</p>




# :pushpin: Index

* [What's this Repo?](#sparkles-What-is-Libft?)
* [List of Functions](#bookmark_tabs-List-of-Fucntions)
* [Technologies](#computer-Technologies)
* [How to Run](#construction_worker-How-to-Run)
* [Find a Bug? Or somenthing need to change?](#bug-Issues)

# :sparkles: What is Libft?

Libft is an individual project at 42 that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.

---

# :bookmark_tabs: List of Fucntions

## Functions from `<ctype.h>`

- [x] [`ft_isalpha`](ft_isalpha.c)	- checks for an alphabetic character.
- [x] [`ft_isdigit`](ft_isdigit.c)	- check for a digit (0 through 9).
- [x] [`ft_isalnum`](ft_isalnum.c)	- checks for an alphanumeric character.
- [x] [`ft_isascii`](ft_isascii.c)	- checks whether c fits into the ASCII character set.
- [x] [`ft_isprint`](ft_isprint.c)	- checks for any printable character.
- [x] [`ft_toupper`](ft_toupper.c)	- convert char to uppercase.
- [x] [`ft_tolower`](ft_tolower.c)	- convert char to lowercase.

## Functions from `<string.h>`

- [x] [`ft_strlen`](ft_strlen.c)	- calculate the length of a string.
- [x] [`ft_memset`](ft_memset.c)	- fill memory with a constant byte.
- [x] [`ft_bzero`](ft_bzero.c)	- zero a byte string.
- [x] [`ft_memcpy`](ft_memcpy.c)	- copy memory area.
- [x] [`ft_memmove`](ft_memmove.c)	- copy memory area.
- [x] [`ft_strlcpy`](ft_strlcpy.c)	- copy string to a specific size.
- [x] [`ft_strlcat`](ft_strlcat.c)	- concatenate a string to a specific size.
- [x] [`ft_strchr`](ft_strchr.c)	- locate character in a string.
- [x] [`ft_strrchr`](ft_strrchr.c)	- locate character in a string.
- [x] [`ft_strncmp`](ft_strncmp.c)	- compare two strings.
- [x] [`ft_memchr`](ft_memchr.c)	- scan memory for a character.
- [x] [`ft_memcmp`](ft_memcmp.c)	- compare memory areas.
- [x] [`ft_strnstr`](ft_strnstr.c)	- locate a substring in a string.
- [x] [`ft_strdup`](ft_strdup.c)	- creates a duplicate for the string passed as a parameter.

## Functions from `<stdlib.h>`
- [x] [`ft_atoi`](ft_atoi.c)	- convert a string to an integer.
- [x] [`ft_calloc`](ft_calloc.c)	- allocates memory and sets its bytes' values to 0.

## Non-standard functions
- [x] [`ft_substr`](ft_substr.c)	- returns a substring from a string.
- [x] [`ft_strjoin`](ft_strjoin.c)	- concatenates two strings.
- [x] [`ft_strtrim`](ft_strtrim.c)	- trims the beginning and end of a string with a specific set of chars.
- [x] [`ft_split`](ft_split.c)	- splits a string using a char as parameter.
- [x] [`ft_itoa`](ft_itoa.c)	- converts a number into a string.
- [x] [`ft_strmapi`](ft_strmapi.c)	- applies a function to each character of a string.
- [x] [`ft_striteri`](ft_striteri.c)	- applies a function to each character of a string.
- [x] [`ft_putchar_fd`](ft_putchar_fd.c)	- output a char to a file descriptor.
- [x] [`ft_putstr_fd`](ft_putstr_fd.c)	- output a string to a file descriptor.
- [x] [`ft_putendl_fd`](ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line.
- [x] [`ft_putnbr_fd`](ft_putnbr_fd.c)	- output a number to a file descriptor.

## Linked list functions

- [x] [`ft_lstnew`](ft_lstnew.c)	- creates a new list element.
- [x] [`ft_lstadd_front`](ft_lstadd_front.c)	- adds an element at the beginning of a list.
- [x] [`ft_lstsize`](ft_lstsize.c)	- counts the number of elements in a list.
- [x] [`ft_lstlast`](ft_lstlast.c)	- returns the last element of the list.
- [x] [`ft_lstadd_back`](ft_lstadd_back.c)	- adds an element at the end of a list.
- [x] [`ft_lstclear`](ft_lstclear.c)	- deletes and free list.
- [x] [`ft_lstiter`](ft_lstiter.c)	- applies a function to each element of a list.
- [x] [`ft_lstmap`](ft_lstmap.c)	- applies a function to each element of a list.

---

# :computer: Technologies

This Project was made with:

* [C](https://devdocs.io/)
* [Makefile](https://www.gnu.org/software/make/manual/make.html)
* [Shell](https://unixguide.readthedocs.io/en/latest/unixcheatsheet/)
* [gcc](https://terminaldeinformacao.com/2015/10/08/como-instalar-e-configurar-o-gcc-no-windows-mingw/)

# :construction_worker: How to Run
```bash
# *************COMMANDS************ #
# run - run compile all the libtest with the your libft and run the all tests
$ make all
# clean - remove the .o and .c files 
$ make clean
# fclean - remove the .o and .c files and the .a
$ make fclean
# re - remove all files and remake all
$ make re

# after run one time the the comand all 
# you can use compile others files .c using this lib 
# and using the function of then.
$ gcc main.c -L . -lft

```





- Actual Status : 
- Result        : 
- Observations : (null)

[![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com)
[![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](https://forthebadge.com)


----

### **Libft**

| Resource                                                                                 | Source    |
| :--------------------------------------------------------------------------------------- | :-------- |
| [Libft - C Standard Library Rewrite](https://www.asidesigned.com/project-libft.html)     | `Website` |
| [Easy Makefile](https://pulgamecanica.herokuapp.com/posts/makefiles)                     | `Website` |
| [Master Memory Management](https://medium.com/p/b86fedd39b96)                            | `Medium`  |
| [Make-A-Make: Clear the fog around Makefiles](https://github.com/Nuno-Jesus/Make-A-Make) | `GitHub`  |

| Project                                                                                  | Source    | User |
| :--------------------------------------------------------------------------------------- | :-------- | :--- |
| [42's libft with comments](https://github.com/pbie42/libft42commented)                   | `GitHub`  | `pbie42` |

| Tester                                                                 | Source    | User |
| :--------------------------------------------------------------------- | :-------- | :--- |
| [francinette](https://github.com/xicodomingues/francinette)            | `GitHub`  | `xicodomingues` |
| [libftTester](https://github.com/Tripouille/libftTester)               | `GitHub`  | `Tripouille` |
| [libft_file_checker](https://github.com/Nuno-Jesus/libft_file_checker) | `GitHub`  | `Nuno-Jesus` |
| [libft-unit-test](https://github.com/alelievr/libft-unit-test)         | `GitHub`  | `alelievr` |
| [Libftest](https://github.com/jtoty/Libftest)                          | `GitHub`  | `jtoty` |
| [libft-war-machine](https://github.com/0x050f/libft-war-machine)       | `GitHub`  | `0x050f` |

----
