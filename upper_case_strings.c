#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[100];
    char up[100];
    fgets(s,100,stdin);
    int len =strlen(s);
    for (int i = 0; i < len; i++)
    {
        up[i]= toupper (s[i]);
    }
    for ( int i = 0; i < len; i++)
    {
        printf("%c",up[i]);
    }
    return 0;
}
