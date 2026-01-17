// Write a C program that takes two integers from the user and swaps their values without using a
// third variable.

#include <stdio.h>
int main()
{
    int a, b;

    printf("First Number: ");
    scanf("%d", &a);

    printf("Second Number: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Numbers after swapping:\n");
    printf("First Number: %d\n", a);
    printf("Second Number: %d\n", b);

    return 0;
}
