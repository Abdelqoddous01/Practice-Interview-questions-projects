#include <stdio.h>

int main(){
    signed long long a=1,b=1,c;
    int n;
    scanf("%d",&n);
    for (int i = 1; i < n-1; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%llu",c);
    return 0;
}