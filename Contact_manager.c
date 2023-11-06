#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct contact
{
    char name[30];
    int phone_number;
}contacts;

int main(){
    struct contact contacts[1000];
    char command[10];
    scanf("%s",&command);
    for (int i = 0; i < strlen(command); i++)
    {
        command[i]=tolower(command[i]);
    }
    
    if (strcmp(command,"add")==0)
    {
        int i;
        printf("Enter the position number you want to store this contact (1,1000): ");
        scanf("%d",&i);
        if (i>=1 && i<=1000)         
        {
            printf("name : ");
            scanf("%s",&contacts[i-1].name);
            printf("Phone number : ");
            scanf("%d",&contacts[i-1].phone_number);
            puts("contact was stored successefully ");
        }
        else{
            puts("Your contact list doesn't have this position. ");
        }
    }
    else if (strcmp(command,"search")==0)
    {
        char name[30];
        int resofserch=0;
        printf("search : ");
        scanf("%s",name);
        for (int i = 0; i < 1000; i++)
        {
            if (strcmp(name,contacts[i].name)!=0)
            {
                resofserch=0;
            }
            else{
                resofserch=1;
                printf("name : ");
                printf("%s\n",contacts[i].name);
                printf("Phone number : ");
                printf("%d\n",contacts[i].phone_number);
                break;
            }
        }
        if (resofserch==0)
        {
            puts("Contact not found ");
        }
    }
    else{
        puts("Invalid command . Use 'add' or 'search' ");
    }
    return 0;
}