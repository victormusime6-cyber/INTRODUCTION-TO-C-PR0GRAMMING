#include <stdio.h>

int main(){

      int number = 0;

    do{
        printf("Enter a number greater than zero: ");
        scanf("%i", &number);
        
    }while (number <= 0);

    return 0;
}