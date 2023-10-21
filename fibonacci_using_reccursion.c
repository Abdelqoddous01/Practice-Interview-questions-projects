#include <stdio.h>

int fibo(int n);

int main() {
    int n;
    
    while (1) {
        printf("Enter a positive integer (greater than or equal to 2): ");
        scanf("%d", &n);
        
        if (n >= 2) {
            printf("Fibonacci number at position %d is: %d\n", n, fibo(n));
            break;
        } else if (n < 0) {
            printf("n must be positive!!\n");
        } else {
            printf("Please enter a valid positive integer.\n");
        }
    }
    
    return 0;
}

int fibo(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } 
    else if (n == 2){
        return 2;
    }
    else {
        return fibo(n - 1) + fibo(n - 2);
    }
}
