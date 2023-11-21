#include <stdio.h>

int main(void){

	int i;
	int num_cars = 0;
	double array[50];
	double car_weight = 0;
	double sum_cars	= 0;
	double ave_weight = 0;
	scanf("%d", &num_cars);		//scan for # of inputs
	for(i = 0; i < num_cars; i++){	//for loop iterating as many times as first input
		scanf("%lf", &car_weight);	//scanning for each car weight
		array[i] = car_weight;		//assign value of input of array cell
		sum_cars += car_weight;	    //car_weight is added each iteration to get sum
	}	
		ave_weight = sum_cars / num_cars;   //calculate average of all inputs

					//(test) printf("%lf\n%lf\n",sum_cars, ave_weight);
		
		for(i = 0; i < num_cars; i++){	  //for loop iterating the same as first 		
			printf("%.1lf\n",ave_weight - array[i]); //print statement to print difference of each stored array cell
		}
			
	
	
	return 0;
}






/*
 *
 * previous activity for reference
#include <stdio.h>

int main(void){

        double array[3];
        double readValue = 0.0;
        int cellNumber = 0;
        int i = 0;
        for(i = 0;i<3;i++){
                printf("Enter a decimal value:");
                scanf("%lf",&readValue);
                array[cellNumber] = readValue;
                printf("Cell number %d contains %.2lf\n", cellNumber, array[cellNumber]);
                cellNumber = cellNumber + 1;
        }

        return 0;
}
*/
