#include <stdio.h>

int main(void){
    
char text[68][40];      //Allocate memory for two dimensional array(68 arrays with 40 chars in each array)
                        
int i = 0;
    for(i=0;i<68;i++){

    scanf("%s", text[i]); //scan for each string of chars to place in 1 of 68 arrays.
    }
    for(i=67;i>-1;i--){
        printf("%s ",text[i]);  //print off each string of chars in reverse order
    }

    return 0;

}
