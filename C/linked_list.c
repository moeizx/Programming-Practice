//Implement a singly linked list in C with insert, print, and free functions.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

node *head = NULL;

bool insert(int value);   // insert at beginning
void print_list(void);
void free_list(void);

int main()
{
    insert(5);
    insert(10);
    insert(20);

    print_list();

    free_list();
}
bool insert(int value)
{
    node *n = malloc(sizeof(node));
    if(n==NULL)
    {
        printf("Memory allocation failed");
        return false;
    }

    n->number=value;
    n->next=NULL;

    // Case 1: empty list
    if(head == NULL)
    {
        head=n;
        return true;
    }

    // Case 2: traverse to end
    node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;

    return true;
}

void print_list(void)
{
    node *temp=head;
    while(temp != NULL)
    {
        printf("%d -> ",temp->number);
        temp=temp->next;
    }

    printf("NULL\n");
}

void free_list(void)
{
    node *temp = head;
    while(temp != NULL)
    {
        node *n = temp->next;
        free(temp);
        temp = n;
    }

    head = NULL;
}
