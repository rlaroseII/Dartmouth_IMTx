#include <stdio.h>

int main(void) {
    int pop = 0;
    int day = 1;
    int total_infect = 1;
            scanf("%d", &pop);      //scan for input(population)
        
           while(total_infect < pop){     //while loop to compare population vs total infected
              day++;                        //increment day +1 each iteration
              total_infect = total_infect * 3;  //increment total infected * 3 each iteration
              
                
           } 
                printf("%d", day);   
                 
            
             
    return 0;
}
