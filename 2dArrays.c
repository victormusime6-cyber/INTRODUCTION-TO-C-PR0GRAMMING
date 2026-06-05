#include <stdio.h>

int main(){

    /*2d Arrays = Aka multi dimensional arrays.
    This z where an array is found within another array...
    e.g;*/

    int numbers[][3] = {{1,2,3},{4,5,6},{7,8,9}};//Good 4 presenting a grid or metrix of data 


    for(int x = 0;x < 3; x++){//rows
        for(int z = 0;z < 3; z++){//columns
            printf("%i ", numbers[x][z]);

        }
        printf("\n");
    }
    return 0;
}