#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char n[32];
    scanf("%s", &n);
    long res =strtol(n,NULL,2);
    printf("%ld",res);
    return 0;
}
