#include <stdio.h>
#include <string.h>

void HappyBirthdaySong(char name[], int age){//Parameters are what the function expects to recieve.
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s!", name);
    printf("\nHappy birthday to you!");
    printf("\nYoy are %i years old!\n", age);
    
}
int main(){

    char name[50] = "";
    int age = 0;

    printf("Enter your name:");
    fgets(name,sizeof(name),stdin);//Fgets is what's used when accepting user input in string format.
    name[strlen(name)- 1] = '\0';// This is so as to prevent the input buffer.

    printf("Enter your age: ");
    scanf("%i", &age);

    HappyBirthdaySong(name, age);//Arguments are what you send a function.
    
    //A function is a piece of code that enables u to reuse other lines of code.
    //Return, actually returns a function to where you call a function.
    return 0;// return 0; is an exit code.
}