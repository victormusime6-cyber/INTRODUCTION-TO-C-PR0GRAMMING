#include <stdio.h>
// ARRAYS = Fixed collection of elements of the same data type.

int main(){

    int numbers[] = {1,2,3,4,5};
    char grades[] = {'A','B','C','D','E'};
    char word[] = {"Africa"};

 //You can change the array element like so.
   numbers[0] = 10;
   // Incase you require to print all elements in a loop u use the for loop.

   for(int n = 0; n < 5; n++ ){
    printf("%i\n", numbers[n]);
   }
    //printf("%c\n", word[2]);
    //printf("%c\n", grades[1]);
    //printf("%i", numbers[0]);

    return 0;
}