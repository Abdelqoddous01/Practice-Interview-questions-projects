#include <stdio.h>
#include <string.h>


int main(void){
    char s[100];
    fgets(s,100,stdin);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]>='a' && s[i]<='z')
        {
            s[i]='a'+(s[i]-'a'+3)%26;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            s[i]='A'+(s[i]-'A'+3)%26;
        }
    }
        
    printf("The encrypted message : %s",s);
    return 0;
}
