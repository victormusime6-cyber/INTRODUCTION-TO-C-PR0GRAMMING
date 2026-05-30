#include <stdio.h>

int main(){
    for (int j = 0; j < 10; j++){
        for(int x = 0; x < 10; x++){
            printf("%3i ", x * j);
    }
    printf("\n");
}
    return 0;
}