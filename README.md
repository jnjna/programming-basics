# C Engineering

A structured, project-based journey through the C programming language with a focus on systems programming, software engineering, and low-level programming concepts.

Rather than only learning language syntax, this repository documents the process of building increasingly complex software from first principles, reimplementing standard library functionality, exploring memory management, and developing reusable libraries and data structures.

---

## Repository Structure

```text
programming-basics/
├── 01-fundamentals/
├── 02-functions/
├── 03-pointers/
├── 04-strings/
├── 05-memory/
├── 06-dynamic-memory/
├── projects/
│   └── string-library/
└── README.md
```

The numbered directories contain topic-focused exercises and experiments.

The `projects/` directory contains larger, reusable software projects built while progressing through the course.

---

## Progress

### Completed

* C fundamentals
* Functions
* Pointer fundamentals
* Pointer arithmetic
* Arrays and pointers
* `void *`
* `NULL`
* `size_t`
* String manipulation
* Memory manipulation

### Current

* Dynamic memory allocation

  * `malloc`
  * `free`
  * Memory leaks
  * Dangling pointers
  * Dynamic arrays

### Planned

* `calloc`
* `realloc`
* Dynamic vectors
* Linked lists
* Function pointers
* File I/O
* Preprocessor and macros
* Multi-file projects
* Build systems
* Makefiles

---

## Projects

### String Library

A from-scratch implementation of selected functions from the C Standard Library's `<string.h>`.

Implemented:

* `my_strlen`
* `my_strcpy`
* `my_strcmp`
* `my_strcat`
* `my_strchr`
* `my_memcpy`
* `my_memmove`
* `my_memset`

---

## Goals

This repository emphasizes:

* Understanding how C works internally
* Writing modular and maintainable code
* Building reusable libraries
* Developing data structures from first principles
* Applying engineering practices such as version control, testing, and incremental project development

The long-term objective is to establish a strong foundation for systems programming, embedded software, operating systems, firmware, and performance-oriented software development.
