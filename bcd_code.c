#include <stdio.h>
#include <string.h>

int main(void){
    int n;
    printf("Enter the decimal nombre :");
    scanf("%d",&n);
    char bcd[10][5]={"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001"};
    int temp=n;
    int x=n;
    int count=0;
    while (temp>0)
    {
         temp/=10;
         count++;
    }
    int arr[count];
    int i=0;
    while (n!=0)
    {
        arr[i]=n%10;
        n=n/10;
        i++;
    }
    printf("The BCD repreentation of %d is :",x);
    for (int j = count-1; j >= 0; j--)
    {
        printf("%s ",bcd[arr[j]]);
    }
    return 0;
}