#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
    printf("");//an introduction to the topic
    char task[10]="task";//you can add any topic
    int len=strlen(task);//lenght of the topic
    char answer[len];
    char user;
    int lives=5;//you can give the number of lives you want
    for (int i = 0; i < len; i++)
    {
        answer[i]='_';//initilaze the array of answers with '_'
    }
    
    while(lives >0)
    {
        int counter=0;
        printf("Enter a letter :");
        scanf(" %c", &user);
        for (int i=0; i < len ; i++)
        {
            if (user==task[i])
            {
                answer[i]=user;
            }
            else{
                counter++;
            }
        }
        if(counter==len){
            lives-- ;}
        for (int i = 0; i < len; i++)
        {
            printf("%c ",answer[i]);
        }
        puts("");
        int res = 1;
        for (int i = 0; i < len; i++) {
            if (!isalpha(answer[i])) {
                res = 0;
                break;
            }
        }

        if (lives == 0) {
            printf("\nYou lose !!\n");
            printf("   \n");
            printf("  /|\\\n");
            printf("  / \\   :(\n");
        }

        if (res == 1) {
            printf("You win\n");
            printf("  \\O/\n");
            printf("   |\n");
            printf("  / \\\n");
            lives = 0;
        }
    }

    return 0;
}