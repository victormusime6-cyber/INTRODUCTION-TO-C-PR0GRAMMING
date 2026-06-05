#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

   //INTERACTIVE QUIZ GAME

   char questions[][100] = {"Who is the head of a nation?",
                            "What objects indicate a nations independence?",
                            "Which is the equivalent of independence?"};
   char options[][100] = {"A.Senator\nB.Mayor\nC.President\nD.Clerk",
                          "A.Gun\nB.Constitution\nC.Monument\nD.Bullet",
                           "A.freedom\nB.Unity\nD.Equality\nC.Nationalisim"};
   char answerKey [] = {'C','B','C',};

   int questionsCount = sizeof(questions)/ sizeof(questions[0]);

   char guess = '\0';
   int score = 0;

   printf("***QUIZ GAME***\n");

   for(int n = 0; n < questionsCount; n++){
      printf("\n%s\n", questions[n]);
      printf("\n%s\n ", options[n]);
      printf("\nEnter your choice: ");
      scanf(" %c", &guess);
      guess = toupper(guess);

      if(guess == answerKey[n]){
        printf("CORRECT!\n");
        score++;
      }
      else{
        printf("WRONG!\n");
      }
   }

   printf("\nYour score is %i out of %i questions attempted.", score,questionsCount);
 
    
    return 0;
}