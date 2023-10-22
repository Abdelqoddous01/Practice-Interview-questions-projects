#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int chekerpassword(int *pasword,int *checking){
    int i=1;
    while (i<=3)
    {
    if (*pasword==*checking)
    {
        printf("Pasword is correcte");
        break;
    }
    else{
        printf("Pasword is incorrect !!\n");
        printf("You have %d trys left : ",3-i);
        scanf("%d",&*checking);
    }
    i++;
    if (i==3 &&*pasword!=*checking)
    {
        printf("\nThe access to the acount is bloked try later .");
        break;
    }
    
    }
    
}
int main() {
    int pasword=123456789;
    int *pp;
    pp=&pasword;
    int check;
    printf("Enter the pasword:");
    scanf("%d",&check);
    int *pc;
    pc=&check;
    chekerpassword(pp,pc);
    return 0;
}