#include <stdio.h>

int main(void){
    
    int num_ingred = 0;
    int i;
    double price_ingred[10];
    double weight_ingred[10];
    double total_price = 0;
    double cost_sum = 0;

    scanf("%d", &num_ingred);           //scan for initial number of inputs/ingredients 
        for(i=0; i<num_ingred; i++){        //first for loop to scan for first array of data
            scanf("%lf",&price_ingred[i]);  
        }
        for(i=0; i<num_ingred; i++){        //second for loop to scan for second array of data
            scanf("%lf", &weight_ingred[i]);
        }
        for(i=0; i<num_ingred; i++){        //third for loop to perform calculations on matching array cells
        total_price = weight_ingred[i] * price_ingred[i];
        cost_sum += total_price;            //sending value of total price to new variable at end of loop iteration
        }                                   //I tried using "total_price += total_price" but it kept rounding up.
        printf("%.6lf", cost_sum); 

	return 0;
}
