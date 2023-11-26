#include <stdio.h>

int main(void){
   
    int input = 0;
    int i;
    int n;
        
        scanf("%d", &input);        //scan for initial input
        for(n=0; n<input; n++){     // first for loop used to multiply how many times internal(second) for loop will run
            for(i=0; i<input; i++){     //second for loop used to print "*" as many times as declared by input
                printf("*");
            }   
        
            printf("\n");           //new line inside of first for loop runs after internal(second) for loop

        }  

    
        
    return 0;

}
