# Dynamic Memory

## Overview

This project introduces dynamic memory allocation in C using the `<stdlib.h>` library. It demonstrates how to allocate memory at runtime with `malloc()` and `calloc()`, how to access dynamically allocated memory using pointers, and how to properly release memory with `free()`.

Unlike variables declared on the stack, dynamically allocated memory exists until it is explicitly released by the programmer.

---

## What is Dynamic Memory?

Dynamic memory is memory that is allocated while a program is running.

Instead of deciding the amount of memory at compile time, the program requests memory from the operating system when it needs it.

Example:

```c
int *ptr = malloc(5 * sizeof(int));
```

This allocates enough memory to store five integers.

---

## malloc()

The `malloc()` function allocates a block of memory.

Example:

```c
int *ptr = malloc(n * sizeof(int));
```

* Returns a pointer to the allocated memory.
* Does **not** initialize the memory.
* Returns `NULL` if the allocation fails.

Because the memory is uninitialized, it may contain garbage values until you write to it.

---

## calloc()

The `calloc()` function allocates memory and initializes every byte to zero.

Example:

```c
int *ptr = calloc(n, sizeof(int));
```

Unlike `malloc()`, memory allocated by `calloc()` starts with all values initialized to zero.

---

## Checking for Allocation Failure

Memory allocation can fail, so the returned pointer should always be checked.

Example:

```c
if (ptr == NULL)
{
    printf("Memory allocation failed!\n");
    return 1;
}
```

Attempting to use a `NULL` pointer results in undefined behavior.

---

## Accessing Dynamically Allocated Memory

Dynamically allocated memory is accessed just like an array.

Example:

```c
ptr[0] = 1;
ptr[1] = 2;
```

or

```c
printf("%d\n", ptr[0]);
```

Although the memory was allocated dynamically, array indexing works exactly the same.

---

## Freeing Memory

Memory allocated with `malloc()` or `calloc()` must be released using `free()`.

Example:

```c
free(ptr);
```

Failing to free allocated memory results in a **memory leak**, where memory remains allocated but is no longer accessible.

---

## Dangling Pointers

After freeing memory, the pointer still contains the old memory address.

Example:

```c
free(ptr);
ptr = NULL;
```

Setting the pointer to `NULL` prevents it from accidentally referencing memory that has already been released.

---

## malloc() vs calloc()

| Function   | Initializes Memory | Parameters                               |
| ---------- | ------------------ | ---------------------------------------- |
| `malloc()` | No                 | Total number of bytes                    |
| `calloc()` | Yes (zeros)        | Number of elements, size of each element |

---

## What I Learned

* What dynamic memory allocation is.
* How to allocate memory using `malloc()`.
* How to allocate zero-initialized memory using `calloc()`.
* Why allocation should always be checked for failure.
* How to access dynamically allocated memory using pointers.
* Why allocated memory must be released with `free()`.
* What memory leaks are.
* What dangling pointers are and why setting pointers to `NULL` is good practice.

---

## Possible Improvements

* Resize allocated memory using `realloc()`.
* Accept the allocation size from user input.
* Store structures in dynamically allocated memory.
* Dynamically allocate strings.
* Build dynamic data structures such as linked lists, stacks, and queues.
