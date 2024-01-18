#include <stdio.h>
int min(int num1, int num2);

int main(void){
int i = 0;
int num1 = 0;
int num2 = 0;
int num_int = 0;
int s_int = 0;
int swap = 0;

    
    scanf("%d", &num_int);
    for(i=0; i<num_int / 2; i++){  
       scanf("%d %d", &num1, &num2);
       s_int = min(num1,num2);
    }   

        
    
    printf("%d", swap);
         

return 0;

}

int min(int num1, int num2){


   if(num1 < num2){
       return num1;
   }else{
      return num2;
   }
} 
