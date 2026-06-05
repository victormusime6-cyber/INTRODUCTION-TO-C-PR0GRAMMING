#include <stdio.h>
#include <stdbool.h>

//TERNARY OPERATOR
int main(){

    //A ternary operator is a short form for the if else statement.
    //(condition)? value_if_true:value_if_false;e.g

    //int n = 1;
    //int m = 10;
    //int max = (n > m) ? n : m;

    //printf("%i", max);

    bool isOnline = false;

    printf("%s", (isOnline) ? "online":"offline");
    return 0;
}