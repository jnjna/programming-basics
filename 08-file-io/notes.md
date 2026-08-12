# File I/O

## Overview

File I/O (Input/Output) allows a C program to store and retrieve data from files.

Unlike normal terminal output, which disappears when the program ends, data written to a file can remain available for later use.

The basic file workflow is:

```text
fopen()
   ↓
read/write
   ↓
fclose()
```

---

## The `FILE` Pointer

C represents an open file using a `FILE` pointer.

```c
FILE *file;
```

The `FILE` type is provided by:

```c
#include <stdio.h>
```

The pointer is used with functions such as `fopen()`, `fprintf()`, `fgets()`, and `fclose()`.

---

## Opening a File

A file is opened using `fopen()`:

```c
file = fopen("example.txt", "w");
```

`fopen()` takes two main arguments:

1. The file name or path.
2. The mode in which the file should be opened.

It returns a `FILE *`.

If the file cannot be opened, `fopen()` returns `NULL`.

Example:

```c
if (file == NULL)
{
    printf("Failed to open file.\n");
    return 1;
}
```

Checking the return value is important because file operations can fail.

---

## File Modes

The three basic modes used in this project are:

| Mode  | Purpose               |
| ----- | --------------------- |
| `"r"` | Read an existing file |
| `"w"` | Write to a file       |
| `"a"` | Append to a file      |

### Read — `"r"`

```c
file = fopen("example.txt", "r");
```

Opens an existing file for reading.

If the file does not exist, `fopen()` fails.

### Write — `"w"`

```c
file = fopen("example.txt", "w");
```

Opens a file for writing.

If the file does not exist, it is created.

If the file already exists, its previous contents are **discarded**.

### Append — `"a"`

```c
file = fopen("example.txt", "a");
```

Opens a file for writing at the end of the existing contents.

If the file does not exist, it is created.

Unlike `"w"`, append mode does not erase existing data.

---

## Writing to a File

`fprintf()` can write formatted data to a file.

Example:

```c
fprintf(file, "Hello from C!\n");
```

This is similar to `printf()`, except the first argument specifies where the output should go.

Terminal output:

```c
printf("Hello from C!\n");
```

File output:

```c
fprintf(file, "Hello from C!\n");
```

Multiple lines can be written:

```c
fprintf(file, "Hello from C!\n");
fprintf(file, "This is the second line.\n");
fprintf(file, "This is the third line.\n");
```

---

## Appending Data

Appending allows new data to be added without removing existing contents.

Example:

```c
file = fopen("example.txt", "a");

if (file == NULL)
{
    printf("Failed to open file.\n");
    return 1;
}

fprintf(file, "This line was appended.\n");

fclose(file);
```

Running this multiple times adds another line each time.

---

## Reading from a File

`fgets()` can read a line from an open file.

Example:

```c
char buffer[100];

fgets(buffer, sizeof(buffer), file);
```

The arguments specify:

* `buffer` — where the data should be stored.
* `sizeof(buffer)` — the maximum number of characters to read.
* `file` — the file being read.

---

## Reading Until the End of a File

`fgets()` returns `NULL` when it cannot read another line.

This allows it to be used in a loop:

```c
while (fgets(buffer, sizeof(buffer), file) != NULL)
{
    printf("%s", buffer);
}
```

The loop continues while another line can be successfully read.

This is a common pattern for reading a text file line by line.

---

## Closing a File

After finishing with a file, it should be closed:

```c
fclose(file);
```

The general lifecycle is:

```text
Open
 ↓
Use
 ↓
Close
```

Files that are successfully opened should be closed when the program is finished using them.

---

## Complete File Workflow

The final `file_demo.c` demonstrates writing, appending, and reading:

```c
#include <stdio.h>

int main()
{
    FILE *file;
    char buffer[100];

    file = fopen("example.txt", "w");

    if (file == NULL)
    {
        printf("Failed to open file.\n");
        return 1;
    }

    fprintf(file, "Hello from C!\n");
    fprintf(file, "This is the second line.\n");
    fprintf(file, "This is the third line.\n");

    fclose(file);

    file = fopen("example.txt", "a");

    if (file == NULL)
    {
        printf("Failed to open file.\n");
        return 1;
    }

    fprintf(file, "This line was appended.\n");

    fclose(file);

    file = fopen("example.txt", "r");

    if (file == NULL)
    {
        printf("Failed to open file.\n");
        return 1;
    }

    printf("File contents:\n\n");

    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(file);

    return 0;
}
```

The program demonstrates the complete cycle:

```text
"w"
 ↓
Write initial data
 ↓
Close

"a"
 ↓
Append data
 ↓
Close

"r"
 ↓
Read data
 ↓
Close
```

---

## What I Learned

* How files are represented using `FILE *`.
* How to open files using `fopen()`.
* How to check whether `fopen()` succeeded.
* The difference between `"r"`, `"w"`, and `"a"` modes.
* How to write formatted text using `fprintf()`.
* How to append data to an existing file.
* How to read text using `fgets()`.
* How to read a file line by line using a `while` loop.
* Why files should be closed using `fclose()`.
* The basic lifecycle of file operations.

---

## Possible Improvements

* Read and write user-provided data instead of fixed strings.
* Use `fscanf()` for formatted input from files.
* Learn additional file modes such as `"r+"`, `"w+"`, and `"a+"`.
* Handle larger files and longer lines.
* Learn how to work with binary files using `fread()` and `fwrite()`.
* Build a small persistent program that stores structured data in a file.
