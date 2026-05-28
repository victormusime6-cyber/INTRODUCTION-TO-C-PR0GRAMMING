#include<stdio.h>

int main(){
    //Using Switch Programs In C

    char DayOfWeek = '\0';

    printf("Enter a day of the week(M,T,W,U,F,S,A): ");
    scanf("%c", &DayOfWeek);

    switch (DayOfWeek)
    {
    case 'M':
        printf("It is Monday.");
        break;

    case 'T':
        printf("It is Tuesday.");
        break;

     case 'W':
        printf("It is Wednesday.");
        break;

    case 'U':
        printf("It is Thursday.");
        break;

    case 'F':
        printf("It is Friday.");
        break;

    case 'S':
        printf("It is Saturday.");
        break;

    case 'A':
        printf("It is Sunday.");
        break;

    default:
        printf("Please enter a day of the week(M,T,W,U,F,S,A).");
    }
    return 0;
}