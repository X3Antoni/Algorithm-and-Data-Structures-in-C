#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linkedlist.h"
#include "randomize.h"

#define MAXNUMBER 10

// int *randomList(int min, int max)
// {
//     int i;
//     int r;
//     int *res = (int *) malloc(sizeof(int) * (max - min));
//     int *visited = (int *) malloc(sizeof(int) * (max - min));

//     for(i = 0; i < (max - min); i++)
//         visited[i] = 0;
    
//     srand((unsigned) time(NULL));

//     for(i = 0; i < (max - min); i++)
//     {
//         r = rand() % (max - min);
//         if(visited[r] == 0) {
//             res[i] = r;
//             visited[r] = 1;
//         } else {
//             i--;
//         }
//     }

//     return res;
// }

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