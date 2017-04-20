#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linkedlist.h"
#include "randomize.h"

#define MAXNUMBER 10

int main()
{
    int i;
    int *input;

    struct list *stack;
    stack = (struct list *) malloc(sizeof(struct list *));

    initializeList(stack);

    input = randomList(0, MAXNUMBER);
    for(i = 0; i < MAXNUMBER; i++)
        insertList(stack, input[i]);
    
    printf("My List:\n");
    viewList(stack);

    printf("\n");
    for(i = 0; i < 20; i++)
        printf("POP: %d\n", popList(stack));
    
    // input = randomList(0, MAXNUMBER);
    for(i = 0; i < MAXNUMBER; i++)
        insertList(stack, i);
    
    printf("My List:\n");
    viewList(stack);

    deleteList(stack, 5);

    printf("\n");
    printf("My List:\n");
    viewList(stack);

    return 0;
}
