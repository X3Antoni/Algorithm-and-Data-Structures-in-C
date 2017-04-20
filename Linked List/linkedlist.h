#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

struct node {
    int key;
    struct node *next;
    struct node *prev;
};

struct list {
    struct node *head;
    struct node *tail;
};

void viewList(struct list *buff);

void initializeList(struct list *buff);

void deleteList(struct list *buff, int value);

void insertList(struct list *buff, int value);

bool emptyList(struct list *buff);

int popList(struct list *buff);

#endif // LINKEDLIST_H_INCLUDED