//Write a C program to print all prime numbers up to a given number n

#include <stdio.h>
#include<math.h>

void prime(int n);

int main()
{
    int n;
    printf("Enter Range: ");
    scanf("%d",&n);

    prime(n);

    printf("\n");
    return 0;
}

void prime(int n)
{
    if(n<2)
    {
        printf("Enter a valid range\n");
        return;
    }
    for(int i=2;i<=n;i++)
    {
        int isPrime=1;
        double k=sqrt(i);
        for(int j=2;j<=k;j++)
        {
            if(i%j==0)
            {

                isPrime=0;
                break;
            }
        }
        if(isPrime)
        {
            printf("%d ",i);
        }
    }

}
