//Write a C program to read a string of unknown length from standard input using dynamic memory allocation (realloc).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s = NULL;
    int len = 0;
    int c;
    while ((c = getchar()) != EOF && c != '\n')
    {
        char *temp = realloc(s, len + 2);
        if (temp == NULL)
        {
            free(s);
            printf("Memory allocation failed\n");
            return 1;
        }
        s = temp;
        s[len] = c;
        len++;
        s[len] = '\0';
    }
    if (s != NULL)
    {
        printf("You entered: %s\n", s);
        free(s);
    }
    return 0;
}
