#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int number;
    int answer;
    srand(time(0));
    answer=rand() % 100 + 1;
    while (1)
    {
        printf("Guess the number:");
        scanf("%d",&number);
        if (number<answer)
        {
            puts("+++++greater++++++");
            printf("try again :");
        }
        else if (number>answer)
        {
            puts("------less------");
            printf("try again :");
        }
        else{
            puts("");
            puts("******************************");
            puts("******CONGRATULATION!!!*******");
            puts("******************************");
            break;
        }
    }
    return 0;
}