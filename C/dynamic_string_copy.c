// Write a C program to copy a string using dynamic memory allocation.

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *copy_string(char *s);

int main()
{
    char *s = get_string("String: ");
    char *cpy = copy_string(s);
    printf("Copy: %s\n", cpy);
    return 0;
}
char *copy_string(char *s)
{
    int len = strlen(s);
    char *p = malloc(len + 1);

    if (p == NULL)
    {
        return NULL;
    }

    for (int i = 0; i <= len; i++)
    {
        *(p + i) = *(s + i);
    }

    return p;
}
