#include <stdio.h>

int main(void){
        
    int num_words = 0;
    int length[100];
    int i;
    int s = 0;
    char word[15];
    int l = 0;
    int t = 0;
      for(i=0; i<100; i++){  //initialize array with 0s so 'length' can be found
          length[i]=0;       //defining initial cells of the array "length"
      }    
        scanf("%d", &num_words);        //scan for number of words
        for(t=0;t<num_words;t++){       //start for loop to scan for words(arrays)
            scanf("%s", word);          //scanning for word
            
            
            l = 0;                      //reinitialize l to 0
            while(word[l] != '\0'){     //start of while loop to compare char until hitting null terminator
                l++;                    //incrementing l to count for number of chars
            

            }
           
            length[l] = length[l] + 1; //getting final # of chars and further defining length by adding one to result(arrays start at zero)
            
                
                    if(s < l ) {       //if statement to find largest number in array
                    s = l;
                
                
                }
        } 
                printf("%d", s);
    

    
    return 0;
}
