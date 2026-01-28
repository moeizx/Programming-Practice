//Write a C program to copy an array using pointers and dynamic memory allocation.

#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

int *copy_array(int *arr, int n);

int main()
{
    int n=get_int("Array size: ");
    int array[n];
    for(int i=0;i<n;i++)
    {
        array[i]=get_int("Index %i: ",i);
    }
    int *p = copy_array(array, n);
    printf("COPY: ");
    for(int i=0;i<n;i++)
    {
        printf("%i ",*(p+i));
    }
    printf("\n");
    return 0;
}

int *copy_array(int *arr, int n)
{
    int *p = malloc(n*sizeof(int));
    if(p==NULL)
    {
        return NULL;
    }
    for(int i=0;i<n;i++)
    {
        *(p+i)=*(arr+i);
    }
    return p;

}
