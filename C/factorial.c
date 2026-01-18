//Write a C program that takes a non-negative integer from the user and calculates its factorial.

#include <stdio.h>

long recursion(int a);
long iteration(int a);

int main()
{
    int choice;
    printf("1- Factorial through iteration\n2- Factorial through recurion");
    printf("\nChoice: ");
    scanf("%d",&choice);
    if(choice!=1 && choice !=2)
    {
        printf("Invalid choice\n");
        return 0;
    }

    int n;
    printf("Number: ");
    scanf("%d", &n);
    if(n<0)
    {
        printf("Invalid number\n");
        return 0;
    }

    long x;

    if(choice==1)
    {

        x= iteration(n);
        printf("Factorial of %d: %li\n",n,x);
        return 0;
    }

    x = recursion(n);
    printf("Factorial of %d: %li\n", n, x);
    return 0;

}

long recursion(int a)
{
    // base case
    if (a == 0)
    {
        return 1;
    }

    // recursive case
    return a * recursion(a - 1);
}

long iteration(int a)
{
    long factorial=a;
    if(a==0 || a==1)
    {
        return 1;
    }
    for(int i=1;i<a;i++)
    {
        factorial*=i;
    }
    return factorial;
}
