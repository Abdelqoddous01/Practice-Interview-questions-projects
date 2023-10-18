#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char questions[][100]={"question1","question2","question3"};//this array contein questions 
    char options[][100]={"A.option1.1","B.oprtion1.2","C.option1.3",
                         "A.option2.1","B.oprtion2.2","C.option2.3"
                         "A.option3.1","B.oprtion3.2","C.option3.3"};
    char answer[3]={'C','A','B'};//this array contein the correct answers like the exemple bellow
    char guess;//the guess input
    int len =sizeof(questions)/sizeof(questions[0]);//this line calculate the lenght of the array of questions
    int position; //give a value to positon,the position of the last options to finish with it in every iteration
    for (int i = 0; i < len; i++)
    {
        printf("%s\n",questions[i]);
        for (int j = (i*position); j <(i*position)+position ; j++)
        {
            printf("%s\n",options[j]);
        }
        printf("guess :");
        scanf(" %c", &guess);//the withe space before %c is to eleminate the new line caractere
        if (toupper(guess)==answer[i])
        {
            puts("****************");
            printf("    True ! !\n");
            puts("****************");
        }
        else{puts("****************");
            printf("   False ! !\n");
            puts("****************");}       
    }
    return 0;
    
}