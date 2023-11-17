#include <stdio.h>

int main(void){

int age = 0;
int age_60 = 60;			//declare value of int explicitly
int lug_weight = 0;
int cost = 0; 

scanf("%d %d", &age, &lug_weight);	//scan for input

if(age == age_60){			//start of lead if statement
	printf("%d",cost);		//print output if input matches initial scanned value for "age"
	}else{				//start of first else which
	if(age < 10){			//branches to another if statement with second comparison
	cost = 5;			//to match for scanned value of "age"
	printf("%d", cost);
}else{					//first main else branching off from the lead if statement
	
	if(lug_weight > 20){		//with its own if statement attempting to match a specific value for "lug_weight"
	cost = 40;
	printf("%d", cost);
	}else{				//and the final else declaring the value of "cost" if nothing else is matched
	cost = 30;			//during the previous if and else statements.
	printf("%d",cost);
}}}


return 0;
}
