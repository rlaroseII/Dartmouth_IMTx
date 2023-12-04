#include <stdio.h>

int main(void){
    
    char name_input[50];
    int even = 0;
    int i = 0;

    scanf("%s", name_input);
        
        while(name_input[i] != '\0')    //iterate loop until hitting null operator
            i++;                        //increment i to count how many characters
           if( even == i % 2  ){        //if statement to compare "even" to i modulus 2(0)
               printf("1\n");
            
             }else{
                printf("2\n");
             }
         

    return 0;

}
