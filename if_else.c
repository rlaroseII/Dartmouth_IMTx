#include <stdio.h>

int main(){
	int pass = 0;
	double cost_gas = 0;
	double user_cost = 0;
	scanf("%d %lf", &pass,&cost_gas);	//scan for int and double
	if(pass > 0){				// if statement comparing int pass
		cost_gas++;			// add 1 to variable
		pass++;				// add 1 to variable
		user_cost = cost_gas / pass;	//calculate user_cost
		printf("%.2lf", user_cost);	//print new value of user_cost
	}else{					//start of else statment
		printf("%.2lf", cost_gas);	//print only original value of variable

	}
	return 0;

}



