//Write a C program that takes a non-negative integer from the user and calculates its factorial.

#include <stdio.h>

long factorial(int a);

void leap_year(int a);

int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);

    long x = factorial(n);

    printf("Factorial of %d: %li\n", n, x);

    return 0;
}

long factorial(int a)
{
    // base case
    if (a == 0)
    {
        return 1;
    }

    // recursive case
    return a * factorial(a - 1);
}
