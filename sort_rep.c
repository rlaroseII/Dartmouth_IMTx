#include <stdio.h>

int main(void){

   char word[50];
   int i = 0;
   int n = 0;
   int j = 0;
   int swap = 0;
   int total = 0;
   int repeat = 0;
   scanf("%s", word);

   while (word[i] != '\0'){   //loop to determine total number of chars in array "word"
       i++;
       n = i;               //assigning n to i to preserve the value of i(number of chars in array)
   }

   for(j=0; j < n - 1; j++){        //looping through array to bubble sort.(least to greatest)
     for(i=0; i < n - 1; i++){
        if(word[i] > word[i + 1]){
        swap = word[i];
        word[i] = word[i+1];
        word[i+1] = swap;
        }
     } 
   }
        
   for(i=0; i<n-1; i++){
       if(word[i] == word[i+2] || word[i] == word[i+3]){   //determining if a repeat exists
           repeat = 1;

        }else
        {
            if(word[i] == word[i+1] && word[i] != word[i+2] && word[i] != word[i+3]){ //adding to total if conditions are met
                total++;

      //  while(repeat == 1 && word[i] == word[i+1]){
        //            total++;
             }

        }   
    }   


    printf("%d", total);
        
    return 0;
}
