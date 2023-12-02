#include <stdio.h>

int main(void){
    
    int num = 0;
    char word[101];
    int i;
    scanf("%d", &num);
    scanf("%s", word);
    
    for(i = 0; i < num; i++){
        printf("%s\n", word);
    }

    return 0;
}



