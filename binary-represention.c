#include <stdio.h>
int main() {
    int n;
    int k;
    printf("Enter a number :");
    scanf("%d", &n);
    unsigned arr1[31] = {0}; 
    char choice[100];

    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Binary forme :");
    for (int i = len1 - 1; i >= 0; i--) {
        arr1[i] = n % 2;
        n = n / 2;}
    for (int i = 0; i < len1; i++)
    {
        printf("%d",arr1[i]);
    }
}
