*This project has been created as part of the 42 curriculum by mmittelb.*

# ft_printf

## Description

ft_printf is a reimplementation of the standard C printf function.
The goal of this project is to understand variadic functions, format specifiers, and low-level output in C.

This custom printf supports the following format specifiers:
- `%c` – character
- `%s` – string
- `%p` – pointer
- `%d` / `%i` – signed integer
- `%u` – unsigned integer
- `%x` / `%X` – hexadecimal (lowercase / uppercase)
- `%%` – percent symbol

All output is written to standard output, and the return value matches the number of characters printed, just like the standard printf.

<br>

## Platform support

This project is developed for Unix-like systems, primarily Linux. It uses Unix-oriented tooling and a Makefile-based build system, so it is generally not intended to run natively on Windows without adaptation. On Windows, the recommended way to build and run it is through WSL.

<br>

## Instructions

### Build

```bash
make
```

### Compile and Run

After building ft_printf.a you can link it with your own programs.

A main is provided to test the program. 

```bash
cc main.c ft_printf.a
./a.out
```
