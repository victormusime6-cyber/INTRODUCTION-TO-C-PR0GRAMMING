#include <stdio.h>

int main(){
    /*While loop continuosly runs a program while a certain condition remains tue.*/

    int number = 0;

    while(number <= 0){
        printf("Enter a nummber geater than 0: ");
        scanf("%i", &number);
    }
    return 0;
}