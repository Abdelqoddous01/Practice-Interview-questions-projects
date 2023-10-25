#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
    int arr1[3][3];
    int arr2[3][3];
    char operation;
    puts("Matrix A :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf(" %d", &arr1[i][j]);
        }
    }
    puts("Matrix B :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf(" %d", &arr2[i][j]);
        }
    }
    printf("Operation between A and B ('*' or '+' or '-') : ");
    scanf(" %c", &operation);
    switch (operation)
    {
    case '+':
    puts("Matrice A+B :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        puts("");
    }
        break;
    case '-':
     puts("Matrice A-B :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr1[i][j]-arr2[i][j]);
        }
        puts("");
        
    }
        break;
    case '*':
    int res[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            res[i][j]=0;
        }
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {   
               res[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int h = 0; h < 3; h++)
        {
            printf("%d ",res[i][h]);
        }
        puts("");
    }
    
    break;
    default:
        puts("Operation not available !");
        break;
    }
    return 0;
}
