#include <stdio.h>

int main(void){
    
    int exp = 0;
    int sumExp = 0;
    while(exp != -1) {
        scanf("%d", &exp);
            sumExp += exp;
    
    }
    printf("%d", sumExp + 1);

    return 0;
}


