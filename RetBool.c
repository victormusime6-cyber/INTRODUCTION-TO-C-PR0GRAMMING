#include <stdio.h>
#include <stdbool.h>
//Return function working with boolean.

bool ageCheck(int age){
    if(age >= 18){
        return true;
    }
    else{
        return false;
    }
}
int main(){

    int age = 12;

    if(ageCheck(age)){
        printf("You are eligable to sign up.");
    }
    else{
        printf("You must be 18+ to sign up.");
    }
    return 0;
}