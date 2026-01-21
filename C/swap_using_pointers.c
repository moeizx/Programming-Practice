//Write a C program to swap two numbers using pointers.

#include<stdio.h>

void swap(int *a,int *b);

int main()
{
    int n,m;

    printf("n: ");
    scanf("%d",&n);

    printf("m: ");
    scanf("%d",&m);

    swap(&n,&m);

    printf("After Swap:\n");

    printf("n: %d\n",n);
    printf("m: %d\n",m);

    return 0;
}

void swap(int *a,int *b)
{
    int temp= *a;
    *a=*b;
    *b=temp;
}
