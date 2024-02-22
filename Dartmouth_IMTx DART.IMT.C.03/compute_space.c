#include <stdio.h>
#include <stdlib.h>

int main(void){

    int num_codes = 0;
    int n = 0;
    int int_input = 0;
    char type;
    int result = 0;
    int sum = 0;

    scanf("%d", &num_codes);            //scan for # of inputs
        for(n=0;n<num_codes;n++){
             scanf("%d %c", &int_input, &type);
             if(type == 'i'){    
                    sum = sum + (sizeof(int) * int_input);
             }else{
                  if(type == 'd'){
                    sum = sum + (sizeof(double) * int_input);
             }else{
                  if(type == 'c'){

                    sum = sum + (sizeof(char) * int_input);
             }else{
                    printf("Invalid tracking code type\n");
                    exit(0);
                   
             }
             }
             }
             }
        
        printf("%d bytes\n", sum);

        return 0;
}
