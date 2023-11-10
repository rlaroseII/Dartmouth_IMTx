#include <stdio.h>

int main(void) {

	double red = 0;
	double yellow = 0;
	double green = 0;
	double cur_average = 0;
	int num_of_rolls = 0;
	int cur_roll = 0;
	int total_rolls = 0;
	scanf("%d", &total_rolls);
	for(int i = 0; i < total_rolls; i++){
	scanf("%lf %lf %lf", &red, &yellow, &green);
	num_of_rolls = num_of_rolls + 1;
	red = red * 1.0;
	yellow = yellow * 10.0;
	green = green * 100.0;
	cur_roll = red + yellow + green;
	cur_average = cur_roll / total_rolls;
//	red += green += yellow;
	printf("%d. you rolled: %d, current average: %.1lf\n", num_of_rolls, cur_roll, cur_average);


	}
	return 0;


}
