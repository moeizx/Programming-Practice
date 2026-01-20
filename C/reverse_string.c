//Write a C program that takes a string input from the user and prints the string in reverse order without using the strlen function.

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main()
{
    string s = get_string("String: ");
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}
