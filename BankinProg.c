#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);


int main(){

    //BANKING PROGRAM

    int choice = 0;
    float balance = 0.0f;

    printf("***YOU ARE WELCOME TO THE BANK***\n");

    do{
        printf("Select an option:\n");
        printf("\t1.Check balance\n");
        printf("\t2.Deposit money\n");
        printf("\t3.Withdraw money\n");
        printf("\t4.Exit\n");
        printf("Enter your choice:");
        scanf("%i", &choice);

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;
        
        case 2:
            balance = balance + deposit();
            break;

        case 3:
            balance = balance - withdraw(balance);
            break;

        case 4:
            printf("\tThank you for using the bank.\n");
            break;

        default:
            printf("\tInvalid choice!\n");

        
        }



    }while(choice != 4);

    return 0;
}

void checkBalance(float balance){
    printf("\nYour current balance is: $%2.f\n", balance);
}
float deposit(){
    float amount = 0.0f;

    printf("Enter amount to deposit:");
    scanf("%f", &amount);

    if(amount < 0){
        printf("You haven't deposited any money.\n");
        return 0.0f;
    }
    else{
        printf("Successfully deposited $%2.f\n", amount);
        return amount;
    }

}
float withdraw(float balance){
    float amount = 0.0f;

    printf("\nEnter amount to withdraw: $");
    scanf("%f", &amount);

    if(amount < 0){
        printf("Invalid amount!\n");
        return 0.0f;
    }
    else if(amount > balance){
        printf("Insufficient funds! Currrent balance is $%2.f\n", balance);
        return 0.0f;
    }   
    else{
        printf("Successfully withdrew $%2.f\n", amount);
        return amount;
    }
   
}
