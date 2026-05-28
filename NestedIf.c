#include<stdio.h>
#include<stdbool.h>

int main(){

    float price = 10.00;
    bool isStudent = true;// 10%
    bool isSenior = true;// 20%
    //student & senior = $7 30%
if(isStudent){
    if(isSenior){
    printf("You get a student ticket discount of 10%\n");
    printf("You get a student ticket discount of 20%\n");
    price *= 0.7;
}

    else{
        printf("You get a student discount of 10%\n");
        price*= 0.9;

    }
}
else{
    if(isSenior){
    printf("You get a student ticket discount of 20%\n");
    price *= 0.8;
   }
}

    printf("The price of a ticket is: $%.2f\n", price);//Incase the boolean is true, this part is executed

return 0;
}