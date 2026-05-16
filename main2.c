#include<stdio.h>

int main(){

    //SHORPING CART PROGRAM
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to purchase? ");
    fgets(item,sizeof(item),stdin);
    item[strlen(item)-1] = '\0';

    printf("Price per desired item: ");
    scanf("%f", &price);

    printf("How many items would you like to purchse? ");
    scanf("%d", &quantity);
     
    total = price * quantity;

    printf("\nYou have bought %d %s/s\n", quantity,item);
    printf("%c%.2f", currency, total);
    return 0;
}