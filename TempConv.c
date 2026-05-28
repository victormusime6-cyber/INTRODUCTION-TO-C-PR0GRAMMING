#include<stdio.h>

//TEMPERATURE CONVERSION PROGRAM

int main(){

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Program\n");
    printf("c.Celsius to Fahrenheit\n");
    printf("f.Fahrenheit to Celsius\n");
    printf("Select either (f or c): ");
    scanf("%c", &choice);

    if(choice == 'c'){
        //C to F
    printf("Enter Celsius temperature: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32; //C TO F
    printf("Temp %.2f celsius is equal to %.2f fahrenheit.\n", celsius, fahrenheit);

    }
    else if(choice == 'f'){
        //F to C
    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit -32) * 5/9;
    printf("Temp %.2f fahrenheit is equal to %.2f celsius.\n", fahrenheit, celsius);
    }
    else{
        printf("Invalid choice! Please select (c or f).");
    }
    return 0;
}