# Linked Lists

## Overview

This project introduces singly linked lists in C.

A linked list is a dynamic data structure made of nodes. Each node stores:

1. Some data.
2. A pointer to the next node.

Unlike an array, linked-list elements do not need to be stored next to each other in memory.

The list is connected through pointers.

---

## What is a Node?

A basic linked-list node can be represented using a structure:

```c
struct node
{
    int data;
    struct node *next;
};