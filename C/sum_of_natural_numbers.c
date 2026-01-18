//Write a C program that takes a natural number from the user and calculates the sum of all natural numbers up to that number using a function.

#include<stdio.h>

long sum(int a);

int main()
{
    int n;
    printf("Number: ");
    scanf("%d",&n);

    if(n<1)
    {
        printf("%d is not a natural number\n",n);
        return 0;
    }

    long x=sum(n);
    printf("Sum of all natural numbers till %d: %li\n",n,x);

    return 0;

}

long sum(int a)
{
    long x=0;
    for(int i=1;i<=a;i++)
    {
        x+=i;
    }
    return x;
}
