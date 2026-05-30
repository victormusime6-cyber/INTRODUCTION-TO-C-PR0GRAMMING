#include <stdio.h>
#include <stdbool.h>
/*FUNCTION PROTOTYPES = Provide information to the compiler, about a funtions name, return type, parameters
before it's actual definition.*/



void hello(char name[], int age);// This is the function prototype
bool ageCheck(int age);

int main(){
    hello("Tommy", 10);

    if(ageCheck(10)){
        printf("You are old enough to work at the factory.");
    }
    else{
        printf("You need to be 16+ years to work at the factory.");
    }
    return 0;}

bool ageCheck(int age){
    if(age >= 16){
        return true;
    }
    else{
        return false;
    }
}

void hello(char name[], int age){
    printf("Hello %s.\n", name);
    printf("You are %i years old.\n", age);
}