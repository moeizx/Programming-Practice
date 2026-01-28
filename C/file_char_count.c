//Write a C program to count the number of characters in a text file using file handling.

#include<stdio.h>

int main()
{
    FILE *file = fopen("data.txt","r");
    if(file==NULL)
    {
        return 1;
    }
    int count=0;
    int c;
    while((c=fgetc(file)) != EOF)
    {
        count++;
    }
    printf("%i\n",count);
    fclose(file);
    return 0;
}
