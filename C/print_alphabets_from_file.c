//Write a C program to print only alphabet characters from a file.

#include<stdio.h>
#include<ctype.h>

int main()
{
    FILE *file = fopen("data.txt","r");
    if(file==NULL)
    {
        return 1;
    }
    int c;
    while((c=fgetc(file)) != EOF)
    {
        if(isalpha(c))
        {
            printf("%c",c);
        }

    }
    printf("\n");
    fclose(file);
    return 0;
}
