#include<stdio.h>

#include "sum.h"

int main(){
    int a, b, c;
    printf("Digite um inteiro: \n");
    scanf("%d\n", &a);
    printf("Digite outro inteiro: \n");
    scanf("%d\n", &b);
    c = sum(a, b);
    printf("a + b = %d\n", c);
    return 0;
}