// Write a C program to read characters into an array and display their corresponding ASCII values.

#include <cs50.h>
#include <stdio.h>

int main()
{
    char c[5];
    for (int i = 0; i < 5; i++)
    {
        c[i] = get_char("Index %i: ", i);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%c > %i\n", c[i], c[i]);
    }
    return 0;
}
