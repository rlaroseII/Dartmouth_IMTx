#include <stdio.h>

void behind(int *, int);

int main(void) {
//! showMemory(start=65520)

    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

void behind(int arr[],int n){

int i = 0;
int max = arr[0];      //declare "max" variable as equal to arr[0] as a starting point for finding largest value. 

     for(i=0;i<n;i++){      //for loop to find largest value
         if(arr[i] > max){  
            max = arr[i];
         }
     }
    
     for(i=0;i<n;i++){          //for loop to subtract value from 
                                //"max" and change variable value at memory address of arr[i]
         arr[i] = max - arr[i];
     } 
       



}

/* Write your function behind() here: */
