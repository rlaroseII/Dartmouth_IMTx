#include <stdio.h>
int min(int num1, int num2);

int main(void){
int i = 0;
int num1 = 0;
int num2 = 0;
int num = 0;
int num_int = 0;
int temp = 0;
   

  scanf("%d", &num_int);       //scan for number of inputs

  scanf("%d %d", &num1, &num2);    //scan for initial two inputs
  temp = min(num1,num2);          //establish initial variable for comparison to rest of list
  for(i=2; i<num_int; i++){      //loop through rest of inputs adding two to 'i' to account for first inputs 
    scanf("%d", &num);           //scan for input
    temp = min(num,temp);   //give variable the value of the function with the variable being used for input
  }


   printf("%d", temp);    

return 0;

}

int min(int num1, int num2){   //'min()' function used for comparing two values and returning the smaller one
        
  if(num1 < num2){
  return num1;
    }else{
         return num2;
         }
  
}
