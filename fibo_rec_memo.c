#include <stdio.h>
#include <stdlib.h>

long long fibo(int n,long long arr[]){
    if (arr[n]==0)
    {
        if (n<=2 )
        {
            arr[n]=1;
            return arr[n];
        }
        else{
            arr[n]=fibo(n-1,arr)+fibo(n-2,arr);
            return arr[n];
        }
    }
    else{
        return arr[n];
    }
}

int main(){
    int n;
    long long *arr = calloc(1000,sizeof(long long));
    scanf("%d",&n);
    long long res=fibo(n,arr);
    printf("The fibo of %lld",res);
    free(arr);
    return 0;
}