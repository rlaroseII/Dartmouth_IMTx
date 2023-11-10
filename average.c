#include <stdio.h>

int main(void) {

	double red = 0; 	//initialize double
	double yellow = 0;	//initialize double
	double green = 0;	//initialize double
	double cur_average = 0;		//initialize double
	int num_of_rolls = 0;		//initialize int
	int cur_roll = 0;		//initialize int
	int total_rolls = 0;		//initialize int
	scanf("%d", &total_rolls);	//scan for total # of roll sets
	for(int i = 0; i < total_rolls; i++){	//start for loop determining how many roll sets
	scanf("%lf %lf %lf", &red, &yellow, &green);	//scan for each roll
	num_of_rolls = num_of_rolls + 1;		//calculate number at beginning of printf statement
	red = red * 1.0;				//declare value of red
	yellow = yellow * 10.0;				//delcare value of yellow
	green = green * 100.0;				//declare value of green
	cur_roll = red + yellow + green;		//declare value of current roll set
	cur_average = cur_roll + cur_roll / total_rolls;	//declare value of current average		
//	red += green += yellow;
	printf("%d. you rolled: %d, current average: %.1lf\n", num_of_rolls, cur_roll, cur_average);


	}
	return 0;


}
