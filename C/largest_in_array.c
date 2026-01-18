//Write a C program that takes n elements from the user and finds the largest element in the array using a function.

#include <stdio.h>

int large(int a[], int b);

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    if(n<=0)
    {
        printf("Array size must be positive\n");
        return 0;
    }

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int x = large(arr, n);
    printf("Larget element in array is %d\n", x);

    return 0;
}
int large(int a[], int b)
{
    int large = a[0];
    for (int i = 1; i < b; i++)
    {
        if (large < a[i])
        {
            large = a[i];
        }
    }
    return large;
}
