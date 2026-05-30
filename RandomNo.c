#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //BASIC PSEUDO_RANDOM NO. PROGRAM
    
    srand(time(NULL));//A seed for generating random numbers.
    int max = 100;
    int min = 50;

    int randomNumber1 = (rand() % (max - min + 1)) + min;

    printf("%i", randomNumber1);

    return 0;
}