#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <ctype.h>

int main(){
    char message[100];
    printf("Enter message :");
    fgets(message,100,stdin);
    int len=strlen(message)-1;
    for (int i = 0; i < len; i++){
        if (isalpha(message[i]))
        {
            if (message[i]+3<='z')
            {
                message[i]=message[i]+3;
            }
        }
        else if(isdigit(message[i])){
            message[i]=message[i]+4;
        }
    }
    printf("The encrypted message is : %s",message);
    return 0;
}