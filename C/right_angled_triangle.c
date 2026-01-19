//Write a C program to print a right-angled triangle of stars with a user-specified number of rows.

#include <stdio.h>
void pattern(int a);
int main()
{
    int n;
    printf("Number of rows: ");
    scanf("%d", &n);

    pattern(n);
    return 0;
}
void pattern(int a)
{
    if (a <= 0)
    {
        printf("Height should be greater than 0\n");
        return;
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
