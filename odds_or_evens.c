#include<stdio.h>

int main(void){
    int num, result;
    printf("input integer:");
    scanf("%d", &num);

    result = num % 2 == 0 ? printf("1\n"): printf("0\n");

    return 0;
}