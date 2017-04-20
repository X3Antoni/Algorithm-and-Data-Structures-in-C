#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "linkedlist.h"

void viewList(struct list *buff) {
    struct node *temp;
    temp = (struct node *) malloc(sizeof(struct node *));
    temp = buff->head;
    while(temp != '\0') {
        printf("%d ", temp->key);
        temp = temp->next;
    }
}

void initializeList(struct list *buff)
{
    buff->head = '\0';
    buff->tail = '\0';
}

void insertList(struct list *buff, int value)
{
    struct node *temp;
    temp = (struct node *) malloc(sizeof(struct node *));
    
    temp->next = buff->head;
    temp->key = value;
    if(buff->head != '\0')
        buff->head->prev = temp;
    buff->head = temp;
    temp->prev = '\0';
}

bool emptyList(struct list *buff)
{
    if(buff->head == '\0')
        return true;
    else
        return false;
}

int popList(struct list *buff)
{
    if(emptyList(buff))
        return -911;
    else
    {
        int ret_val;
        struct node *temp;
        temp = (struct node *) malloc(sizeof(struct node *));

        temp = buff->head;

        if(temp->prev != '\0')
            temp->prev->next = temp->next;
        else
            buff->head = temp->next;
        if(temp->next != '\0')
            temp->next->prev = temp->prev;
        
        ret_val = temp->key;
        free(temp);
        return ret_val;
    }
}