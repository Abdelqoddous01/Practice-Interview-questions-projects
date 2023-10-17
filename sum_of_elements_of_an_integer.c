#include <stdio.h>

int main(){
    int n;
    int size_of_n;
    int res=0;
    printf("Enter a number:");
    scanf("%d",&n);
    puts("");
    printf("The size of the given number:");
    scanf("%d",&size_of_n);
    for (int i = 0; i <=size_of_n ; i++)
    {
        res+=n%10;
        n=n/10;
    }
    printf("The sum of the element of n is :%d",res);
    return 0;
}