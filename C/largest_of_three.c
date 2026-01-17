// Write a C program that takes three integers from the user and prints the largest among them.

#include <stdio.h>

void largest(int a, int b, int c);

int main()
{
    int a, b, c;

    printf("First number: ");
    scanf("%d", &a);

    printf("Second number: ");
    scanf("%d", &b);

    printf("Third number: ");
    scanf("%d", &c);

    largest(a, b, c);

    return 0;
}

void largest(int a, int b, int c)
{
    if (a > b && a > c)
    {
        printf("%d is the largest of three numbers\n", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the largest of three numbers\n", b);
    }
    else if (c > a && c > b)
    {
        printf("%d is the largest of three numbers\n", c);
    }
    else
    {
        printf("No single number is largest of three numbers\n");
    }
}
