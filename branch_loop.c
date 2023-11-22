#include <stdio.h>

int main(void){
    int num_city = 0;
    int i;
    int region[10];   
    int total = 0;
    scanf("%d", &num_city);     // scan for initial input(number of cities)
                                    
        for(i=0; i<num_city; i++){      //for loop with # of iterations based on first input
            scanf("%d", &region[i]);    //scanning for each input and placing data in each array cell
    
            if(region[i] > 10000){      //if statement checking for matching data each input
                total = total + 1;      // and tallying up(+1) if statement is true    
            }else{                      //else to declare total is only equal to itself otherwise
            total = total;
            }
        }
    printf("%d\n", total);              //print off tallied array inputs that match if statement

    return 0;
}


