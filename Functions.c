#include <stdio.h>

void HappyBirthdaySong(char name[], int age){
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s!", name);
    printf("\nHappy birthday to you!");
    printf("\nYoy are %i years old!\n", age);
    
}
int main(){

    char name[] = "Victor";
    int age = 19;

    HappyBirthdaySong(name,age);
    HappyBirthdaySong(name,age);
    HappyBirthdaySong(name,age);
    //A function is a piece of code that enables u to reuse other lines of code.

    return 0;
}