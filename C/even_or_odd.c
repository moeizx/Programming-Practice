//Write a C program that takes an integer from the user and checks whether the number is even or odd
#include<stdio.h>

void func(int n);

int main()
{
    int n;
    printf("Number: ");
    scanf("%d",&n);

    func(n);

    return 0;
}

void func(int n)
{
    if(n%2==0)
    {
        printf("Even number\n");
        return;
    }
    printf("Odd number\n");
}
