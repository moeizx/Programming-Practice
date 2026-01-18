//Write a C program that takes an integer from the user and prints its multiplication table from 1 to 10 using a function

#include <stdio.h>
void multiplication_table(int a);

int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);

    multiplication_table(n);

    return 0;
}

void multiplication_table(int a)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", a, i, a * i);
    }
}
