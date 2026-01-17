//Write a C program that takes a year as input from the user and determines whether it is a leap year or not.

#include<stdio.h>

void leap_year(int a);

int main()
{
    int year;
    printf("Year: ");
    scanf("%d",&year);

    leap_year(year);

}

void leap_year(int a)
{
    if((a%4==0 && a%100!=0) || (a%400==0))
    {
        printf("%d is a leap year\n",a);
        return;
    }
    printf("%d is not a leap year\n",a);
    return;
}

