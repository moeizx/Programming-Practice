//Write a C program to calculate the power of a number using a loop

#include<stdio.h>

int power(int a,int b);

int main()
{
    int n;
    printf("Number: ");
    scanf("%d",&n);

    int m;
    printf("Power: ");
    scanf("%d",&m);

    int p=power(n,m);
    printf("Answer: %d\n",p);
}
int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }

    int answer=1;
    for(int i=0;i<b;i++)
    {
        answer*=a;
    }
    return answer;
}
