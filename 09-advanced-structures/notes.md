# Advanced Structures

## Overview

This section builds on the basic `struct` concepts from the Structures lesson.

The goal is to understand additional C features that make structures more flexible and powerful:

- `typedef`
- `enum`
- `union`
- tagged unions
- nested structures
- self-referential structures
- structures with dynamic memory

These concepts eventually lead into linked lists and other dynamic data structures.

---

## typedef

`typedef` creates an alias for an existing type.

Instead of repeatedly writing:

```c
struct Student student;