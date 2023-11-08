#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insert(int arr[],int number,int position){
    arr=realloc(arr,6);
    arr[5]=number;
    int count=5;
    int temp;
    while (count>=position)
    {
        temp=arr[count-1];
        arr[count-1]=number;
        arr[count]=temp;
        count--;
    }
}

void delet(int arr[],int number){
    int size=0;
    for (int i = 0; i < 5; i++)
    {

        if (arr[i]!=number)
        {
            arr[size++]=arr[i];
        
        }
    }
}

int main() {
    int *arr=malloc(sizeof(int)*5);//the size can be modified 
    arr[0]=1; //exemple of initilization array
    arr[1]=2;
    arr[2]=3;
    arr[3]=4;
    arr[4]=5;
    char command[10];
    scanf("%s",command);
    if (strcmp(command,"insert")==0)
    {
        int number,position;
        printf("number : ");
        scanf("%d",&number);
        printf("position : ");
        scanf("%d",&position);
        insert(arr,number,position);
        printf("The modified array : ");
        for (int i = 0; i < 6; i++)
        {
            printf("%d ",arr[i]);
        }
    }
    else if (strcmp(command,"delet")==0)
    {
        int number;
        printf("number : ");
        scanf("%d",&number);
        delet(arr,number);
        for (int i = 0; i < 4; i++)
        {
            printf("%d ",arr[i]);
        }
    }

    free (arr);
    return 0;
}
