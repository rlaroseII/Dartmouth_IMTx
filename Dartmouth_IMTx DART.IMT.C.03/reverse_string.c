#include <stdio.h>

int isReverse(char *, char *);

int main(void){
    //! showMemory(start=65520)
char word1[99];
char word2[99];

    scanf("%s", word1);
    scanf("%s", word2);
    
    

if(isReverse(word1,word2) == 1){
    printf("%s is the reverse of %s\n", word1,word2);
   }else{
        printf("%s is not the reverse of %s\n", word1,word2);

        }
        
 return 0;   

}


int isReverse(char input1[], char input2[])
{
    int n = 0;
    int l = 0;
    int p = 0;
    int i = 0;

    while(input1[n] != '\0'){   //count how many chars are in array
        n++;
    }

     while(input2[i] != '\0'){   //count how many chars are in array
        i++;
        
    }
    if(i == n)                   //initial comparison to determine if arrays are of the same length
    {
       for(p=i; p>n-n; p--)      //for-loop counter to decrement array variable
       {
            if(input1[p-1] == input2[l])     //if-statement comparing values of both arrays.
            {                                //and incrementing second array variable if both are found to match
            l++;
            }
       }         
              if(l == i)                    //final if-statement comparing both variables
              {                             
              return 1;
              }else
              {
               return 0;
              }
       
    }
    return 0;
}
