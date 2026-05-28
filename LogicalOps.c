#include<stdio.h>

int main(){

    // Logical operators can be used to combine or modify bolean expressions

    // && = AND
    // || = OR
    // ! = NOT

    //TEMPERATURE CHECK PROGRAM
    
    int temperature = 29;

    if(temperature <= 0 || temperature >= 30){
        printf("The temperature is BAD.");
    }
    else{
        printf("The temparature is GOOD.");
    }

   return 0;
}