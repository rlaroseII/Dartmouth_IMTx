#include <stdio.h>

int main() {

	int past_noon = 0;
	int total_cost = 0;
	scanf("%d", &past_noon);
	if(past_noon > 0){
		total_cost = 10 + (past_noon * 5);
		printf("%d",total_cost);
	}else{
		printf("%d", total_cost + 10);
	}

	

return 0;
}
