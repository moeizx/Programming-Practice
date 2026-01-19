//Write a C program to convert a decimal number to binary using either an array or recursion.

#include<stdio.h>

void binary1(int a);
void binary2(int a);

int main()
{
    int choice;
    printf("1- Decimal to binary through\n2- Decimal to binary through recursion\n");
    printf("Choice: ");
    scanf("%d",&choice);
    if(choice !=1 && choice !=2)
    {
        printf("Invalid choice\n");
        return 0;
    }

    int n;
    printf("Number: ");
    scanf("%d",&n);

    if(n==0)
    {
        printf("%d\n",0);
        return 0;
    }

    if(choice==1)
    {
        binary1(n);
        return 0;
    }

    binary2(n);
    printf("\n");
    return 0;
}

void binary1(int a)
{
    int arr[32];
    int i=0;
    while(a>0)
    {
        arr[i]=a%2;
        a/=2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
    printf("\n");
}

void binary2(int a)
{
    //base case
    if(a==0)
    {
        return;
    }
    //recursive case
    binary2(a/2);
    printf("%d",a%2);
}
