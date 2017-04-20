---  
title: Linked Lists
author: Markus Antoni Suwignyo
date: January 20, 2014  
---  

# Introduction

Linked-lists are some of the most fundamental data strucutres. Linked lists consist of a number of elements grouped, or _linked_, together in a specific order. They are useful in maintaining collections of data, similar to the way that arrays are often used. However, linked lists offers important advantages over arrays in many cases. Specifically, linked lists are considerably more efficient in performing insertions and deletions. Linked lists also make use of dynamically allocated storage, which is storage allocated at runtime. Since in many applications the size of the data is not known at compile time, this can be a nice attribute as well.

# Implementation in C

In this source code, I've using doubly-linked list. Each node have 3 items, namely value, previous pointer, and next pointer. Here's some snippet to the struct that I use.

```c
struct Node {
    int key;
    struct node *next;
    struct node *prev;
};

struct List {
    struct node *head;
    struct node *tail;
};
```

There's also some function that you can use. The list are:

1. `insertList(L, k)`
2. `deleteList(L, k)`
3. `viewList(L)`
4. `popList(L)`

where `L` is the list that you want to process, and `k` is the value on some node.