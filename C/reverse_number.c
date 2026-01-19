//Write a C program to reverse the digits of a given integer, handling negative numbers and zero correctly.

#include<stdio.h>

void reverse(int a);

int main()
{
    int n;
    printf("Number: ");
    scanf("%d",&n);

    reverse(n);

    return 0;

}
void reverse(int a)
{
    if(a==0)
    {
        printf("%d\n",0);
        return;
    }

    if(a<0)
    {
        printf("-");
        a=-a;
    }
    int temp=a;
    while(temp>0)
    {
        printf("%d",temp%10);
        temp/=10;
    }
    printf("\n");
}
