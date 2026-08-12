# C Engineering

A structured, project-based journey through the C programming language with a focus on systems programming, software engineering, memory, data structures, algorithms, and low-level programming.

Rather than learning C as a collection of syntax rules, this repository documents the process of building programs from first principles, understanding how they work in memory, and gradually combining concepts into larger and more reusable systems.

The repository also contains independent projects designed to reinforce concepts through implementation rather than passive study.

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
├── 07-structures/
├── 08-file-io/
├── 09-advanced-structures/
├── 10-linked-lists/
├── 11-stacks-queues/
├── 12-algorithms/
├── projects/
│   ├── string-library/
│   └── vector/
└── README.md
```

The numbered directories contain topic-focused notes, examples, and progressively larger programs.

The `projects/` directory contains independent projects that apply concepts from multiple sections and emphasize reusable, modular code.

---

## Learning Progression

The course is structured so that each section builds on concepts introduced previously.

### 01 — Fundamentals

* Variables and data types
* Input and output
* Arithmetic operators
* Conditional statements
* `switch`
* Loops
* Type casting
* Input validation
* Menu-driven programs

### 02 — Functions

* Function prototypes
* Function definitions
* Function calls
* Parameters
* Return values
* `void` functions
* Program decomposition
* Code reuse

### 03 — Pointers

* Memory addresses
* Pointer declaration
* Address-of operator (`&`)
* Dereference operator (`*`)
* Pointer modification
* Pointers and functions
* Arrays and pointers
* Pointer arithmetic
* `void *`
* `NULL`

### 04 — Strings

* Character arrays
* Null termination
* String indexing
* `strlen()`
* `strcpy()`
* `strcmp()`
* `strcat()`
* `<string.h>`
* String manipulation

### 05 — Memory

* Memory representation
* Variable storage
* Addresses
* `sizeof`
* Stack memory
* Memory inspection
* Relationship between variables and pointers

### 06 — Dynamic Memory

* `malloc()`
* `calloc()`
* `realloc()`
* `free()`
* Allocation failure
* Memory leaks
* Dangling pointers
* Dynamic arrays
* Runtime-sized data

### 07 — Structures

* `struct`
* Structure members
* Structure variables
* Arrays of structures
* Pointers to structures
* `.` operator
* `->` operator
* Structures with pointers and dynamic memory

### 08 — File I/O

* `FILE *`
* `fopen()`
* File modes
* `fprintf()`
* `fgets()`
* `fclose()`
* Reading files
* Writing files
* Appending data
* Persistent program data

### 09 — Advanced Structures

* Combining structures with pointers
* Structures with dynamic memory
* Nested data organization
* Reusable data representations
* Foundations for dynamic data structures

### 10 — Linked Lists

* Self-referential structures
* Nodes
* Dynamic allocation
* Traversal
* Insertion
* Deletion
* Searching
* Memory management

### 11 — Stacks and Queues

* Stack operations
* Queue operations
* Array-based implementations
* Linked implementations
* Dynamic memory
* Abstract data structures

### 12 — Algorithms

* Searching
* Sorting
* Algorithmic thinking
* Time complexity
* Space complexity
* Comparing implementations
* Applying algorithms to data structures

---

## Projects

### String Library

A from-scratch implementation of selected functions from the C standard string and memory libraries.

Implemented:

* `my_strlen`
* `my_strcpy`
* `my_strcmp`
* `my_strcat`
* `my_strchr`
* `my_memcpy`
* `my_memmove`
* `my_memset`

The project is organized into separate source files, a public header, and tests.

### Vector

A dynamic vector implementation built using C structures and dynamic memory.

The project applies concepts including:

* Structures
* Pointers
* Dynamic memory
* Arrays
* Capacity management
* Modular source/header organization
* Testing

---

## Development Approach

Each topic is approached through progressively more complex programs.

A typical section contains:

1. **Concept notes** — explanations, rules, and important details.
2. **Focused programs** — small programs demonstrating individual concepts.
3. **Progressive programs** — programs combining concepts introduced earlier.
4. **Projects** — larger implementations requiring multiple concepts to work together.

This keeps individual concepts easy to revisit while developing the ability to combine them into complete programs.

---

## Engineering Practices

The repository also emphasizes practical software engineering habits:

* Git version control
* Incremental commits
* Modular source files
* Header files
* Testing
* Reusable code
* Clear project organization
* Debugging
* Compiler warnings
* Documentation

The goal is not simply to make programs that work, but to understand why they work and develop the habits required to build maintainable software.

---

## Long-Term Roadmap

After completing the core C material through algorithms, the journey will continue into LC-3 assembly and computer organization.

```text
C Fundamentals
      ↓
Memory & Pointers
      ↓
Data Structures
      ↓
Algorithms
      ↓
LC-3 Assembly
      ↓
Computer Organization
      ↓
Connecting C ↔ Assembly
      ↓
C++
      ↓
Systems / Low-Level Software
```

The purpose of this progression is to connect higher-level programming concepts with the lower-level mechanisms that make them possible.

---

## Goals

This repository aims to develop a strong foundation in:

* C programming
* Memory management
* Pointers
* Data structures
* Algorithms
* Systems programming
* Low-level programming
* Software engineering
* Debugging and testing
* Computer organization

The long-term objective is to understand software across multiple abstraction levels—from high-level C code down to memory, machine instructions, and hardware-oriented concepts.

---

## Status

**In progress.**

This repository is a living record of the learning process, with each stage building toward increasingly complex systems and lower-level programming concepts.
