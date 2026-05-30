#include <stdio.h>

int main(){

    //break = stops a loop from running.
    //continue = skips current cycle of a loop.

    for(int x = 1; x <= 11; x++){

        if(x == 4){
            break;
        }
    printf("%i\n", x);
    }
    return 0;
}