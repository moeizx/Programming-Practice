// Write a C program that converts temperature based on the user’s choice

#include <stdio.h>

void Celsius_Fahrenheit(float a);
void Fahrenheit_Celsius(float a);

int main()
{
    int choice;

    printf("Choose conversion:\n");
    printf("1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        float c;
        printf("Enter temperature in Celsius: ");
        scanf("%f", &c);

        Celsius_Fahrenheit(c);
    }
    else if (choice == 2)
    {
        float f;
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &f);

        Fahrenheit_Celsius(f);
    }
    else
    {
        printf("Invalid Choice\n");
    }

    return 0;
}

void Celsius_Fahrenheit(float a)
{
    float f = (a * (9.0 / 5.0)) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", f);
}

void Fahrenheit_Celsius(float a)
{
    float c = (a - 32) * (5.0 / 9.0);
    printf("Temperature in Celsius: %.2f\n", c);
}
