# Custom C String & Memory Library

## Overview

This project is a from-scratch implementation of a subset of the C Standard Library's `<string.h>` functions. The goal is to build a deeper understanding of how strings and memory are represented and manipulated in C, without relying on the standard library implementations.

The project focuses on pointer arithmetic, memory layout, modular programming, and writing reusable library code. It is intended as a learning exercise and serves as a foundation for future work in systems programming, embedded software, operating systems, and firmware development.

---

## Implemented Functions

### String Functions

| Function    | Description                                                            |
| ----------- | ---------------------------------------------------------------------- |
| `my_strlen` | Returns the length of a null-terminated string.                        |
| `my_strcpy` | Copies a null-terminated string from a source to a destination buffer. |
| `my_strcmp` | Compares two strings lexicographically.                                |
| `my_strcat` | Appends one string to the end of another.                              |
| `my_strchr` | Returns a pointer to the first occurrence of a character in a string.  |

### Memory Functions

| Function     | Description                                                         |
| ------------ | ------------------------------------------------------------------- |
| `my_memcpy`  | Copies a fixed number of bytes from one memory location to another. |
| `my_memmove` | Copies memory safely even when the source and destination overlap.  |
| `my_memset`  | Fills a block of memory with a specified byte value.                |

---

## Project Structure

```text
string-library/
├── include/
│   └── mystring.h
├── src/
│   ├── my_strlen.c
│   ├── my_strcpy.c
│   ├── my_strcmp.c
│   ├── my_strcat.c
│   ├── my_strchr.c
│   ├── my_memcpy.c
│   ├── my_memmove.c
│   └── my_memset.c
├── tests/
│   └── test_string.c
└── README.md
```

---

## Building

Compile the project using GCC:

```bash
gcc -Iinclude \
tests/test_string.c \
src/*.c \
-o test_string
```

Run the test program:

```bash
./test_string
```

---

## Concepts Covered

This project provides hands-on practice with:

* Pointer arithmetic
* C strings and null terminators
* Raw memory manipulation
* Const correctness
* Header files and modular programming
* Separate compilation
* Function interfaces
* Basic testing
* Git-based development

---

## Future Work

The library will continue to expand with additional functionality, including:

* Dynamic memory management (`malloc`, `calloc`, `realloc`, `free`)
* Additional string manipulation functions
* Utility functions for arrays and memory
* Data structures built on top of these primitives

---

## License

This project is provided for educational purposes.
