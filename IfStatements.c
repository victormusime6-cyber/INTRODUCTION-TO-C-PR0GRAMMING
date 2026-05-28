#include<stdio.h>

int main(){
     
    int age = 0;
    
    printf("Ente your age: ");
    scanf("%d", &age);

    if( age > 17 && age > 69){
       printf("You are are an a adult and a senior citizen.");}
    else if(age > 35){
        printf("You are a senior adult.");
    }
    else if(age > 17){
        printf("You are an a adult.");
    }
    else if(age < 0 ){
        printf("You haven't yet been born.");
    }
    else{
        printf("You aren,t an adult.");
    }


    return 0;
}