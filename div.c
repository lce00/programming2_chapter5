#include<stdio.h>

int main(void){
    int a, b;
    printf("input integer:");
    scanf("%d", &a);

    printf("input integer:");
    scanf("%d", &b);

    float c = (float)a/(float)b;

    printf("%f\n", c);
    
    return 0;
}