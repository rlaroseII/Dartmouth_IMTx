#include <stdio.h>

int main(void){
    int hidden_num = 0;
    int guess_num = 0;
    int sum_num = 0;

    scanf("%d", &hidden_num);           //scan for first input
        while(hidden_num != guess_num)  //while loop to iterate until var = var
        {
          sum_num++;                    //count how many iterations
          scanf("%d", &guess_num);      //scan for int
          if(guess_num < hidden_num)    //first if statement using comparison operator <
          {

            printf("it is more\n");
          
          }else{                        //first else to execute next if statement
                    
                 if(guess_num > hidden_num)     //second if statement using comparison operator >
                 { 
                   printf("it is less\n");

                     
                 }else{printf("Number of tries needed:\n%d", sum_num); //second else to print when var = var
                      }
               }
       }   
                        
        
        
        return 0;
}




