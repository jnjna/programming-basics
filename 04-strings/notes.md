# Strings

## Overview

This project introduces strings in C and the standard string library (`<string.h>`). It demonstrates how to declare strings, access individual characters, modify strings, copy strings, compare strings, and determine their length.

Unlike many programming languages, strings in C are simply arrays of characters terminated by a null character (`'\0'`).

---

## What is a String?

A string is a sequence of characters stored in a character array and terminated by a null character.

Example:

```c
char str[] = "Hello World!";
```

In memory, the string looks like this:

```text
+---+---+---+---+---+---+---+---+---+---+---+---+----+
| H | e | l | l | o |   | W | o | r | l | d | ! | \0 |
+---+---+---+---+---+---+---+---+---+---+---+---+----+
```

The null terminator (`'\0'`) marks the end of the string.

---

## Printing Strings

Strings are printed using the `%s` format specifier.

Example:

```c
printf("String: %s\n", str);
```

---

## String Length

The `strlen()` function returns the number of characters in a string, excluding the null terminator.

Example:

```c
printf("Length: %zu\n", strlen(str));
```

For `"Hello World!"`, the length is `12`.

---

## Accessing Individual Characters

Since strings are arrays, individual characters can be accessed using array indexing.

Example:

```c
printf("%c\n", str[0]);
printf("%c\n", str[strlen(str) - 1]);
```

* `str[0]` accesses the first character.
* `str[strlen(str) - 1]` accesses the last character.

---

## Modifying Strings

Characters in a character array can be modified.

Example:

```c
str[0] = 'h';
```

After this change, `"Hello World!"` becomes `"hello World!"`.

---

## Copying Strings

Strings should be copied using `strcpy()`.

Example:

```c
char str2[20];
strcpy(str2, str);
```

After copying, `str2` contains an independent copy of `str`.

Changing one string does not affect the other.

---

## Comparing Strings

Strings are compared using `strcmp()`.

Example:

```c
if (strcmp(str, str2) == 0)
{
    printf("The strings are equal.\n");
}
```

`strcmp()` returns:

* `0` if the strings are equal.
* A negative value if the first string comes before the second alphabetically.
* A positive value if the first string comes after the second alphabetically.

---

## The Standard String Library

The `<string.h>` header provides many useful functions for working with strings.

Some common functions include:

| Function   | Purpose                           |
| ---------- | --------------------------------- |
| `strlen()` | Returns the length of a string.   |
| `strcpy()` | Copies one string into another.   |
| `strcmp()` | Compares two strings.             |
| `strcat()` | Concatenates (joins) two strings. |

---

## What I Learned

* How strings are represented in C.
* The purpose of the null terminator (`'\0'`).
* How to print strings using `%s`.
* How to find a string's length with `strlen()`.
* How to access individual characters using array indexing.
* How to modify characters in a string.
* How to copy strings using `strcpy()`.
* How to compare strings using `strcmp()`.
* Why the functions in `<string.h>` are useful.

---

## Possible Improvements

* Accept string input from the user using `fgets()`.
* Concatenate strings using `strcat()`.
* Convert strings to uppercase or lowercase.
* Search for characters or substrings.
* Implement custom versions of common string functions for practice.
