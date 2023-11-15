#include <stdio.h>

int main(void){
	
	int roll_one = 0;	//declare int
	int roll_two = 0;	//delcare int
	scanf("%d\n%d", &roll_one, &roll_two);	//scan for input
	if(roll_one + roll_two >= 10){		//if statement using comparison
		printf("Special Tax\n36");	//print if comparison is true
	}else{					//else print original input with calculation
		printf("Regular Tax\n%d", (roll_one + roll_two) * 2);
	}

return 0;
}
