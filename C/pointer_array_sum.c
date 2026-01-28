//Write a C program to find the sum of array elements using pointers.

#include <cs50.h>
#include <stdio.h>

int sum(int *array, int n);

int main()
{
    int n = 4;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = get_int("Index %i: ", i);
    }
    int total = sum(arr, n);
    printf("Sum: %i\n", total);
    return 0;
}
int sum(int *array, int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += *(array + i);
    }
    return total;
}
