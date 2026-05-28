#include<stdio.h>
#include<string.h>

int main(){

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    //This function solves the issue creared by \n durig the print.
    getchar(); 
    printf("Enter your full name: "); 

    // This function enables automatic change of name size input in char above.
    fgets(name, sizeof(name), stdin);

    /*This function solves the issue of space created during the re_alignment of 
    printing the name variable.*/
    name[strlen(name)-1] = '\0';

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);

    return 0;
}