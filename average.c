#include <stdio.h>

int main(void) {

	double red = 0;
	double yellow = 0;
	double green = 0;
	double cur_aver = 0;
	double sum_roll = 0;
	int num_of_rolls = 0;		
	int cur_roll = 0;		
	int total_rolls = 0;		
	scanf("%d", &total_rolls);	//scan for total # of roll sets
	for(int i = 0; i < total_rolls; i++){	//start for loop determining how many roll sets
	scanf("%lf %lf %lf", &red, &yellow, &green);	//scan for each roll

	num_of_rolls = num_of_rolls + 1;		//calculate number at beginning of printf statement
	red = red * 1.0;				//declare value of red
	yellow = yellow * 10.0;				//delcare value of yellow
	green = green * 100.0;				//declare value of green
	cur_roll = red + yellow + green;		//declare value of current roll set	
		
//		for(int n = 0; n < total_rolls; n++) {
//		cur_aver = cur_roll / num_of_rolls;	
//		}


	printf("%d. you rolled: %d, current average: %.1lf\n", num_of_rolls, cur_roll, cur_aver);
	cur_roll += cur_roll;

	}
	return 0;


}
