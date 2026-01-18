#include <stdio.h>

void isPrime(int a);

int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);

    isPrime(n);

    return 0;
}

void isPrime(int a)
{
    if (a <= 1)
    {
        printf("%d is not a prime number\n", a);
        return;
    }
    int prime = 0;
    for (int i = 2; i <= a; i++)
    {
        if (i!= a && a%i==0)
        {
            prime = 1;
            break;
        }
    }
    if (prime == 0)
    {
        printf("%d is a prime number\n", a);
        return;
    }
    printf("%d is not a prime number\n", a);
    return;
}
