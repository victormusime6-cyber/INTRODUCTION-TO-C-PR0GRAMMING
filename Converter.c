#include<stdio.h>

int main(){

    //WEIGHT CONVERTER PROGRAM USING IF'S
    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to pounds.\n");
    printf("2. Pounds to kilograms.\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
       //Kilograms to pounds.
       printf("Enter te weight in kilogram:.");
       scanf("%f", &kilograms);
       pounds = kilograms * 2.20462;
       printf("%.2f kilograms is equal to %.2fpounds.", kilograms, pounds);}

    else if(choice == 2){
       //Pounds to kilorams
       printf("Enter weight in pounds:");
        scanf("%f", &pounds);
       kilograms = pounds/2.20462;
       printf("%.2f pounds is equal to %.2fkilograms.", pounds, kilograms);}
    else{
        printf("Invalid choice! Please enter 1 or 2\n");
    }

    return 0;
}