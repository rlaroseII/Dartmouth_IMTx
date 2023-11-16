#include <stdio.h>

int main(void){
	
	int num_players = 0;
	int team_one = 0;
	int team_two = 0;
	int team_one_sum = 0;
	int team_two_sum = 0;
	int n = 0;
	int i = 0;
	scanf("%d", &num_players);		//scan for initial number of players per team
			
	for(i = 0; i < num_players; i++){	//for loop iterating based on number of players per team
	  scanf("%d",&team_one);		//scan for first team
	  scanf("%d",&team_two);		//scan for second team	
	    for(n = 0; n < 1; n++){			//nested loop to set to run once per iteration of first loop
	    team_one_sum += team_one;		//during loop values of team_one and team_two are added to new variables
	    team_two_sum += team_two;		
            }
	    
	}
	  if(team_one_sum > team_two_sum){			//if statement comparing variables team_one to team_two
	    printf("Team 1 has an advantage\n");	//print statement for team_one	
	      }else{					//else statment for team_two_sum
	         printf("Team 2 has an advantage\n");	//print statement for team_two_sum
	       }
		 	   
	printf("Total weight for team 1: %d\n", team_one_sum);
	printf("Total weight for team 2: %d\n", team_two_sum); 		//printing totals of new variables added up during nested for loop

	return 0;

}
