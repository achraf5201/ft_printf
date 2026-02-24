# ft_printf

ft_printf is a custom implementation of the standard C `printf` function.
The goal of this project is to understand variadic functions, parsing,
and formatted output in C.

---

## Description

ft_printf reproduces the behavior of the original `printf` function
using only allowed functions.  
It handles formatted output and writes to the standard output.

⚠️ Bonus features are NOT included.

---

## Supported Conversions

ft_printf supports the following format specifiers:

- `%c` : print a single character
- `%s` : print a string
- `%p` : print a pointer address in hexadecimal
- `%d` : print a signed decimal integer
- `%i` : print a signed decimal integer
- `%u` : print an unsigned decimal integer
- `%x` : print a hexadecimal number (lowercase)
- `%X` : print a hexadecimal number (uppercase)
- `%%` : print a percent sign

---

## Project Structure

ft_printf/
├── ft_printf.c
├── ft_printf_utils.c
├── ft_printf.h
├── Makefile
└── README.md

---

## Compilation

To compile the library, run:

make

This will generate the static library:

libftprintf.a

### Makefile rules

make clean    # remove object files  
make fclean   # remove object files and libftprintf.a  
make re       # recompile the library  

---

## Usage

Include the header file in your source code:

#include "ft_printf.h"

Compile your program with ft_printf:

gcc main.c libftprintf.a

---

## Requirements

- Language: C
- Uses variadic functions (`stdarg.h`)
- Follows 42 Norm
- No forbidden functions
- No bonus part

---

## Notes

This library can be reused in future projects and combined with libft.

---

## Author

ael-bala
