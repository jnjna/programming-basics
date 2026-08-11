# Structures

## Overview

This project introduces structures (`struct`) in C. Structures allow multiple related pieces of data, potentially of different types, to be grouped together into a single object.

The project progresses from basic structures to arrays of structures and finally to pointers to structures.

---

## What is a Structure?

A structure is a user-defined data type that groups related variables together.

Example:

```c
struct Student
{
    char name[50];
    int age;
    float gpa;
};
```

This creates a structure type called `struct Student` containing three members:

* `name` — a character array
* `age` — an integer
* `gpa` — a floating-point value

The structure definition acts as a blueprint. It does not create a `Student` variable by itself.

---

## Creating a Structure Variable

A variable can be created using the structure type:

```c
struct Student student;
```

This creates one `Student` object containing its own `name`, `age`, and `gpa`.

---

## Accessing Structure Members

The `.` operator is used to access members of a structure variable.

Example:

```c
student.age = 20;
student.gpa = 3.75;
```

For the character array, `strcpy()` can be used:

```c
strcpy(student.name, "Justin");
```

A string cannot be assigned directly to a character array using `=`.

---

## Multiple Structure Variables

Multiple variables can be created from the same structure type:

```c
struct Student student1;
struct Student student2;
```

Each variable is a separate object with its own members.

Changing:

```c
student1.age = 21;
```

does not change:

```c
student2.age;
```

---

## Arrays of Structures

Structures can be stored in arrays.

Example:

```c
struct Student students[5];
```

This creates an array containing five `Student` structures.

Each element can be accessed using an index:

```c
students[0]
students[1]
students[2]
```

Structure members can then be accessed using the `.` operator:

```c
students[i].name
students[i].age
students[i].gpa
```

This is especially useful when working with collections of related data.

---

## Pointers to Structures

A pointer can store the address of a structure:

```c
struct Student *ptr = &student;
```

The pointer now points to the `student` structure.

Structure members can be accessed through the pointer using the `->` operator.

Example:

```c
printf("Age: %d\n", ptr->age);
```

The `->` operator means:

> Follow the pointer to the structure, then access the specified member.

---

## `.` vs `->`

The two operators are used depending on what you have.

### Structure variable

```c
student.age
```

Use `.` when you have the actual structure.

### Pointer to a structure

```c
ptr->age
```

Use `->` when you have a pointer to the structure.

---

## What `->` Really Means

The following two expressions are equivalent:

```c
ptr->age
```

and:

```c
(*ptr).age
```

The parentheses are necessary because the `.` operator has higher precedence than `*`.

The `->` operator is simply the convenient way to access a structure member through a pointer.

---

## Modifying a Structure Through a Pointer

Because a pointer contains the address of the original structure, modifying a member through the pointer modifies the original structure.

Example:

```c
ptr->age = 22;
```

The original structure now contains:

```c
student.age
```

with the value `22`.

This demonstrates how pointers provide indirect access to existing data.

---

## Structures and Other C Concepts

Structures become much more powerful when combined with concepts already learned:

```text
Structure
    +
Array
    +
Pointer
    +
Dynamic Memory
```

These combinations are the foundation for more advanced C data structures such as linked lists, stacks, and queues.

---

## What I Learned

* How to define a `struct`.
* How structures group related data.
* How to create structure variables.
* How to access structure members using `.`.
* How to create arrays of structures.
* How to access members of structures stored in arrays.
* How to create pointers to structures.
* How to access structure members through pointers using `->`.
* The relationship between `->` and `(*ptr).member`.
* How modifying a structure through a pointer changes the original structure.

---

## Possible Improvements

* Dynamically allocate structures using `malloc()`.
* Pass structures to functions.
* Pass structures to functions using pointers.
* Create nested structures.
* Use arrays of structures with dynamic memory.
* Build data structures such as linked lists using structures and pointers.
