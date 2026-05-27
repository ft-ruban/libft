*This project has been created as part of the 42 curriculum by ldevoude*

# Project libft

## Description
This project involves coding a C library that will include numerous general purpose functions for any C programs. I had to code all of these functions from scratches all of those in C following the 42 norme. I also had to learn how to do a Makefile for the first time and learn what are concepts like 
- compilation
- how includes for your own files works.
- to read documentations in general
- this project also served as a refresher of concepts learned during the piscine

## Elements of the project

### Character checks and conversions

#### functions related to character verification and ASCII manipulation

- ft_isalpha.c
- ft_isdigit.c
- ft_isalnum.c
- ft_isascii.c
- ft_isprint.c
- ft_toupper.c
- ft_tolower.c

### String manipulation

#### functions used to manipulated, search, duplicate, or change strings

- ft_strlen.c
- ft_strlcpy.c
- ft_strlcat.c
- ft_strdup.c
- ft_strchr.c
- ft_strrchr.c
- ft_strncmp.c
- ft_strnstr.c
- ft_strjoin.c
- ft_strtrim.c
- ft_substr.c
- ft_split.c
- ft_striteri.c
- ft_strmapi.c

### Memory manipulation

#### Functions related to memory allocation, init or copy

- ft_memset.c
- ft_bzero.c
- ft_memcpy.c
- ft_memmove.c
- ft_memchr.c
- ft_memcmp.c
- ft_calloc.c

### conversion functions

#### functions used to convert data types

- ft_atoi.c
- ft_itoa.c

### File descriptor functions

#### functions used to print data to a given FD

- ft_putchar_fd.c
- ft_putstr_fd.c
- ft_putendl_fd.c
- ft_putnbr_fd.c

### Project files / misc

#### Core files required for the library and compilation

- libft.h
- Makefile
- README.md

## Instructions
### Compilation
Run:
```bash
make
```
this shall generate the libft.a static library.

### Use of AI:

- `ldevoude`: mostly as a debugging tool when nobody at school could help with an issue. I try to make it being a very rare occurence and to use it when I am truly stuck for hours. I also used it as a complement to documentation to make sure I understand the various topics I was confronted on libft.


## Resources
- https://man7.org
- https://linux.die.net/
- https://www.w3schools.com/
- https://stackoverflow.com/
- https://www.reddit.com/r/C_Programming/comments/18ixoxr/best_pointers_explanation/
- https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/