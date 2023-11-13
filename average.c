#include <stdio.h>

int main(void) {

	double red = 0;
	double yellow = 0;
	double green = 0;
	double cur_aver = 0;
	int sum_roll = 0;
	int num_of_rolls = 0;		
	int cur_roll = 0;		
	int total_rolls = 0;		
	scanf("%d", &total_rolls);		//scan for total # of roll sets
	for(int i = 0; i < total_rolls; i++){		//start for loop determining how many roll sets
	scanf("%lf %lf %lf", &red, &yellow, &green);	//scan for each roll

	num_of_rolls += 1;			//calculate number at beginning of printf statement
	red = red * 1.0;			//declare value of red
	yellow = yellow * 10.0;			//declare value of yellow
	green = green * 100.0;			//declare value of green
	cur_roll = red + yellow + green;	//declare value of current roll set	
		for(int n = 0; n < 1; n++){	//for loop iterating one time every iteration of first loop
						//add initial value to new variable based on
		sum_roll += cur_roll;		

		}				//variable "cur_roll". After new value is given to 
						//"sum_roll" it is then used to calculate the cur_aver
						//based on it's temporary value provided by for-loop.
		

	cur_aver = sum_roll / num_of_rolls;	// After second for-loop "sum_roll" is able to be used for calculation of "cur_aver"
	printf("%d. you rolled: %d, current average: %.1lf\n", num_of_rolls, cur_roll, cur_aver);

	}


	return 0;


}
