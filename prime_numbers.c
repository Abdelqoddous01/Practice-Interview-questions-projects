#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i=0;
    int k=0;
    while (n>2)
    {
        int j=0;
        for (int i=2; i<= sqrt(n); i++)
        {
            if (n%i==0)
            {
                j++;
            }
        }
        if (j==0)
        {
            arr[k]=n;
            k++;
        }
        n--;
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}