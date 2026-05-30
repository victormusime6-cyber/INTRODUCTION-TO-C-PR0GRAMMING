#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //NUMBER GUESSING GAME

    srand(time(NULL));

    int guess = 0;
    int attempts = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max - min + 1) + min);

    printf("***NUMBER GUESSING GAME***\n");

    do{
       printf("Guess a number between %i_%i:", min,max);
       scanf("%i", &guess);
       attempts++;

       if(guess < answer){
        printf("TOO LOW!\n");
       }
       else if(guess > answer){
        printf("TOO HIGH!\n");
       }
       else{
        printf("CORRECT!\n");
       }

    }while( guess != answer);

    printf("The answer is %i.\n", answer);
    printf("It took you %i attempts to guess right.", attempts);
    return 0;
}
