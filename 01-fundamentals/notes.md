# Fundamentals

## Overview

This project is a simple menu-driven calculator written in C. It demonstrates the core building blocks of the language, including variables, user input, conditional statements, loops, and arithmetic operations.

## Concepts Covered

### Variables

Variables are used to store data that can be modified during program execution.

```c
int a, b, choice;
```

* `a` and `b` store the numbers entered by the user.
* `choice` stores the selected menu option.

---

### Input and Output

The program interacts with the user using `printf()` and `scanf()`.

```c
printf("Enter your choice: ");
scanf("%d", &choice);
```

* `printf()` displays information on the screen.
* `scanf()` reads input from the user.
* The `&` operator passes the address of a variable so `scanf()` can store the entered value.

---

### Loops

A `do...while` loop is used so the calculator menu is displayed at least once.

```c
do
{
    // Program logic
} while (choice != 5);
```

Unlike a `while` loop, the condition is checked **after** the loop body executes.

---

### Conditional Statements

The program uses `if` statements to make decisions.

```c
if (choice < 1 || choice > 5)
```

This checks whether the user's menu choice is valid.

Another `if` statement prevents division by zero.

```c
if (b != 0)
```

---

### Switch Statement

The `switch` statement selects which arithmetic operation to perform.

```c
switch (choice)
{
    case 1:
        // Addition
        break;

    case 2:
        // Subtraction
        break;

    ...
}
```

Using `switch` is often cleaner than writing many `if...else if` statements when choosing between multiple fixed options.

---

### Arithmetic Operators

The calculator demonstrates the four basic arithmetic operators.

| Operator | Operation      |
| -------- | -------------- |
| `+`      | Addition       |
| `-`      | Subtraction    |
| `*`      | Multiplication |
| `/`      | Division       |

---

### Type Casting

For division, the program casts one operand to `float`.

```c
(float)a / b
```

Without the cast, integer division would occur.

Example:

```text
10 / 3 = 3
```

With casting:

```text
10 / 3 = 3.33
```

---

### Loop Control

The program uses `continue` to skip the rest of the current loop iteration when the user enters an invalid menu option.

```c
continue;
```

Execution immediately jumps to the loop condition, then begins the next iteration if the condition is still true.

---

## What I Learned

* Declaring and using variables.
* Reading user input with `scanf()`.
* Displaying output with `printf()`.
* Writing menu-driven programs.
* Using `if` statements for validation.
* Selecting code paths with `switch`.
* Repeating code using a `do...while` loop.
* Performing arithmetic operations.
* Preventing division by zero.
* Converting integers to floating-point values with type casting.
* Using `continue` to control loop execution.

## Possible Improvements

* Move each operation into its own function.
* Support decimal input using `float` or `double`.
* Add more operations such as modulus (`%`) and exponentiation.
* Validate non-numeric input.
* Improve the user interface with better formatting.
