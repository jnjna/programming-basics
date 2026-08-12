# Dynamic Memory

## Overview

Dynamic memory allocation allows a C program to request memory while the program is running.

Unlike fixed-size arrays, where the size is generally determined before execution, dynamically allocated memory allows the program to determine how much memory it needs at runtime.

This section introduces:

- `malloc()`
- `calloc()`
- `free()`
- `NULL`
- memory leaks
- dangling pointers
- dynamically allocated arrays

---

## What is Dynamic Memory?

Dynamic memory is memory requested during program execution.

For example:

```c
int *ptr = malloc(5 * sizeof(int));