#include <stdio.h>
#include <string.h>


int main(void){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if (i%3==0 && i%5==0)
        {
            printf("FizzBuzz ");
        }
        else if(i%3==0 && i%5!=0)
        {
            printf("Fizz ");
        }
        else if(i%3!=0 && i%5==0){
            printf("Buzz ");
        }
        else if(i%3!=0 && i%5!=0){
            printf("%d ",i);
        }
    }
    return 0;   
}