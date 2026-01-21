// Write a C program to allocate memory dynamically for 5 integers, store values, print them, and
// free the memory.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p = malloc(5 * sizeof(int));
    if (p == NULL)
    {
        return 1;
    }
    for (int i = 0; i < 5; i++)
    {
        p[i] = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(p + i));
    }
    free(p);
    return 0;
}
