#include<stdio.h>
#define BITS_PER_BYTE 8

int main(){
    
    unsigned int num;
    int j = 0;

    printf("input integer: ");
    scanf("%d", &num);

    for (int i = 0; i < sizeof(num)*BITS_PER_BYTE; i++){
        int result = num >> i & 1;
        printf("%d", result);

        if (result == 1) j = j+1;
    }

    printf("\nHow many 1? %d\n", j);

    return 0;
}