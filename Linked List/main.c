#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linkedlist.h"

#define MAXNUMBER 10

int main()
{
    int i;

    struct list *stack;
    stack = (struct list *) malloc(sizeof(struct list *));

    initializeList(stack);

    for(i = 0; i < MAXNUMBER; i++)
        insertList(stack, i);
    
    viewList(stack);

    for(i = 0; i < 20; i++)
        printf("\nPOP: %d", popList(stack));
    
    return 0;
}