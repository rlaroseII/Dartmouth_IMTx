#include <stdio.h>


int main(void){
   

   int num_students = 0;
   int scores[31];
   char names[51];
   int score_swap[31];
   int swap = 0;
   int i = 0;
   int s = 0;
   int j = 0;
   int n = 0;
   int rank = 0;


    scanf("%d", &num_students);        //scan for # of students

    for(i=0; i<num_students; i++){       //scan for each score and assign to array score cell of [i]
    scanf("%d", &scores[i]);
    score_swap[i] = scores[i];
    
    }
      

    for (j=0; j<num_students-1; j++){        //sorting second copy of scores(score_swap) from least to greatest
        for (n=0; n<num_students-1; n++) {
            if (score_swap[n] > score_swap[n+1]) {
            swap = score_swap[n];
            score_swap[n] = score_swap[n+1];
            score_swap[n+1] = swap;
            }
          }
       }


        for(i=0; i<num_students; i++){      //main loop for comparing scores to score_swap and printing results
        rank = 0;                        //reset rank to 0
        scanf("%s", names);
            for(s=0; s<num_students; s++){      //subloop for comparing scores to score_swap
                
                if(scores[i] <= score_swap[s]){
                rank++;
                }

            }
        printf("%s rank is %d\n", names, rank);     //printing results

        }

    return 0;

}
