#include <stdio.h>

int main(){

    int scores[5] = {0};

    for(int n = 0;n < 5; n++){
    printf("Enter a score: ");
    scanf("%i", &scores[n]);
    }

    for(int n = 0;n < 5;n++){
        printf("%i ", scores[n]);
    }

    return 0;
}