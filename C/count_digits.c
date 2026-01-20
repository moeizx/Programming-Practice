//Write a C program to count the number of digits in a given integer.

#include<stdio.h>

int count(int a);

int main()
{
    int n;
    printf("Number: ");
    scanf("%d",&n);

    int digits=count(n);
    printf("Digits: %d\n",digits);

    return 0;
}

int count(int a)
{
    if(a==0)
    {
        return 1;
    }
    int x=0;
    while(a!=0)
    {
        a/=10;
        x++;
    }
    return x;
}
