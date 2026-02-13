//Write a C program to implement a stack using an array. Create push, pop, and is_empty functions, and test them in main.

#include <stdio.h>
#include <stdbool.h>

#define CAPACITY 100

int stack[CAPACITY];
int size = 0;

// implement push, pop, is_empty here
bool push(int value);    // add to stack
bool pop(int *value);    // remove and return value
bool is_empty(void);     // return true if stack is empty


int main(void)
{
    // test your stack!
    push(10);
    push(20);

    int x;

    if(pop(&x))
    {
        printf("Popped: %d\n",x);
    }
}

bool push(int value)
{
    if(size==CAPACITY)
    {
        return false; //stack full
    }
    //add value
    stack[size]=value;
    //increase size
    size++;
    return true;
}
bool pop(int *value)
{
    if(size==0)
    {
        return false; // stack empty;
    }
    size--;
    *value = stack[size];
    return true;
}
bool is_empty(void)
{
    if(size==0)
    {
        return true;
    }
    return false;
}
