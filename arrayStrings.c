#include <stdio.h>

//ARRAY OF STRINGS
int main(){
    char fruits[][10] = {"apples","bananas","mangoes","pawpaws"};

    //Code 4 calculating size of the Array
    int size = sizeof(fruits) / sizeof(fruits[0]);

    for(int n = 0;n < size; n++){
        printf("%s\n", fruits[n]);
    }

    return 0;
}

/* NB:   rows   columns
char name []    [] */