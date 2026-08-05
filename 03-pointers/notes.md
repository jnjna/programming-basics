# Pointers

## Overview

Pointers are one of C's most powerful features. Unlike ordinary variables, which store values, pointers store the memory addresses of other variables. This allows programs to directly access and modify data in memory.

This project demonstrates how to declare pointers, store addresses, dereference pointers, and modify variables through pointers.

---

## What is a Pointer?

A pointer is a variable that stores the memory address of another variable.

Example:

```c
int num = 10;
int *ptr = &num;
```

Here:

* `num` stores the value `10`.
* `&num` is the memory address of `num`.
* `ptr` stores that address.

---

## The Address-of Operator (`&`)

The `&` operator returns the memory address of a variable.

Example:

```c
int num = 10;

printf("%p\n", (void *)&num);
```

The output is a hexadecimal memory address.

---

## The Dereference Operator (`*`)

The `*` operator accesses the value stored at the address held by a pointer.

Example:

```c
printf("%d\n", *ptr);
```

If `ptr` points to `num`, then `*ptr` accesses the value of `num`.

---

## Modifying Values Through Pointers

Pointers can both read and modify variables.

Example:

```c
*ptr = 20;
```

This changes the value of `num` because `ptr` points to `num`.

---

## Printing Pointer Addresses

Pointers are typically printed using the `%p` format specifier.

Example:

```c
printf("%p\n", (void *)ptr);
```

The pointer is cast to `void *` because `%p` expects a generic pointer type.

---

## Memory Visualization

```
Variable        Address        Value
------------------------------------
num             0x1000         10
ptr             0x2000         0x1000
```

`ptr` stores the address of `num`, not the value `10`.

Using:

```c
*ptr
```

follows the stored address and accesses the value stored there.

---

## What I Learned

* What pointers are.
* The difference between a value and its address.
* How to declare pointer variables.
* How to use the `&` operator.
* How to use the `*` operator to dereference pointers.
* How pointers can modify variables indirectly.
* Why `%p` is used to print memory addresses.
* Why pointers are commonly cast to `void *` when using `printf()`.

---

## Possible Improvements

* Swap two variables using pointers.
* Pass pointers to functions.
* Explore pointer arithmetic.
* Demonstrate pointers with arrays.
* Introduce pointers to pointers (`**`).
