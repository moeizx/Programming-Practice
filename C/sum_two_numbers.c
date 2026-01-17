// Write a C program that takes two integers from the user and prints their sum.

#include <stdio.h>

void sum(int a, int b);

int main()
{
    int a, b;
    printf("First Number: ");
    scanf("%d", &a);

    printf("Second Number: ");
    scanf("%d", &b);

    sum(a, b);

    return 0;
}
void sum(int a, int b)
{
    printf("Sum: %d\n", a + b);
}
