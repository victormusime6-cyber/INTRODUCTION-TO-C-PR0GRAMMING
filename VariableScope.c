#include <stdio.h>

int add(int x,int y){//SCOPE 1
   int result = x + y;
   return result;
}
int main(){//SCOPE2 Same variable used
    // Variable Scope =Refers to where a variable is reconized and accessible.
    //  Variables can share the same name if they are in different scopes.
    /*Functions can't see inside other functions. That,s y when we call a function we call 
    a function we have to pass in an argument */

    int result = add(3,7);

    printf("%i", result);
    return 0;
}