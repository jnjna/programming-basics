# Functions

## Overview

This project refactors the calculator from the Fundamentals lesson by breaking the program into reusable functions. Instead of placing all the logic inside `main()`, each function is responsible for a single task, making the program easier to read, maintain, and extend.

## What is a Function?

A function is a reusable block of code that performs a specific task.

Instead of writing the same code multiple times, a function allows the code to be written once and called whenever it is needed.

Example:

```c
int add(int a, int b)
{
    return a + b;
}
```

Calling the function:

```c
int result = add(5, 3);
```

The value of `result` becomes `8`.

---

## Function Prototype

A function prototype tells the compiler that a function exists before it is used.

Example:

```c
int add(int a, int b);
```

Without a prototype (or defining the function before `main()`), the compiler does not know the function's return type or parameters.

---

## Function Definition

The function definition contains the actual implementation.

Example:

```c
int multiply(int a, int b)
{
    return a * b;
}
```

This function receives two integers and returns their product.

---

## Function Call

A function is executed by calling it.

Example:

```c
printf("Result: %d\n", add(a, b));
```

Execution temporarily jumps to `add()`, computes the result, returns it, and continues executing the next statement.

---

## Parameters

Parameters are variables listed in a function's definition that receive values from the caller.

Example:

```c
int subtract(int a, int b)
```

Here, `a` and `b` are parameters.

When the function is called:

```c
subtract(10, 4);
```

the values `10` and `4` are copied into the parameters.

---

## Return Values

Many functions return a value to the caller.

Example:

```c
return a + b;
```

The `return` statement immediately ends the function and sends the computed value back to the calling function.

---

## Void Functions

Some functions perform an action without returning a value.

Example:

```c
void displayMenu(void)
{
    printf("Select operation:\n");
}
```

The `void` return type indicates that no value is returned.

---

## Program Structure

Instead of one large function, the calculator is organized into several smaller functions.

```
main()
│
├── displayMenu()
├── add()
├── subtract()
├── multiply()
└── divide()
```

Each function has a single responsibility, making the code easier to understand.

---

## Benefits of Functions

* Reduce code duplication.
* Improve readability.
* Make debugging easier.
* Encourage code reuse.
* Make programs easier to maintain.
* Allow large programs to be divided into smaller, manageable pieces.

---

## What I Learned

* How to declare function prototypes.
* How to define functions.
* How to call functions from `main()`.
* How parameters pass data into functions.
* How return values send data back to the caller.
* The difference between `void` functions and functions that return values.
* Why breaking a program into smaller functions improves organization.

---

## Possible Improvements

* Move the calculator into a loop so multiple calculations can be performed.
* Add additional operations such as modulus (`%`) and exponentiation.
* Split the functions into separate source (`.c`) and header (`.h`) files.
* Accept floating-point input using `float` or `double`.
* Improve input validation for non-numeric values.
