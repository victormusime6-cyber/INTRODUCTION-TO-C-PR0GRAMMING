#include <stdio.h>

int main(){
  //This is going to include switches and NestedIf statements.
   //CALCULATOR PROGRAM

   char operator ='\0';
   double num1 = 0.0;
   double num2 = 0.0;
   double result = 0.0;

   printf("Enter the first number: ");
   scanf("%lf", &num1);
   
   printf("Enter the operator(+-*/): ");
   scanf(" %c", &operator);/*You need yo clear the new line chareacter from the input buffer.
   Do this by creating a gap in the qoutes of %c*/

   printf("Enter the second number: ");
   scanf(" %lf", &num2);

   switch(operator){
      case '+':
        result = num1 + num2;
        break;

      case '-':
        result = num1 - num2;
        break;

      case '*':
        result = num1 * num2;
        break;

      case '/':
        if(num2 == 0){
            printf("You can,t devide by zero!\n");
        }
        
        else{
            result = num1/num2; 
        }

    default:
        printf("Invalid operator\n");
   }

    printf("Result: %.2lf", result);
      
    return 0;
}