//Write a C program that calculates the area of a rectangle, circle, or triangle based on the user’s choice.

#include<stdio.h>

void rectangle(int a,int b);
void circle(int a);
void triangle(int a,int b);

int main()
{
    int choice;

    printf("Choose a shape to calculate area:\n");
    printf("1. Rectangle\n2. Circle\n3. Triangle\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

    if(choice==1)
    {
        int width,length;

        printf("Enter Width: ");
        scanf("%d",&width);

        printf("Enter Length: ");
        scanf("%d",&length);

        rectangle(width,length);
    }
    else if(choice==2)
    {
        int radius;

        printf("Enter Radius: ");
        scanf("%d",&radius);

        circle(radius);
    }
    else if(choice==3)
    {
        int base,height;

        printf("Enter Base: ");
        scanf("%d",&base);

        printf("Enter Height: ");
        scanf("%d",&height);

        triangle(base,height);
    }
    else
    {
        printf("Invalid Choice\n");
    }

    return 0;
}

void rectangle(int a,int b)
{
    printf("Area of rectangle: %d\n",a*b);
}

void circle(int a)
{
    float pi=3.14;
    printf("Area of circle: %.2f\n",pi*(a*a));
}

void triangle(int a,int b)
{
    printf("Area of triangle: %.2f\n",(float)(a*b)/2);
}
