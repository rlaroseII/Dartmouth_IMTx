#include <stdio.h>
int sumOfDigits(int);       //function prototype

int main(void){

int num = 0;

    scanf("%d", &num);

    printf("%d",sumOfDigits(num));    //calling function in print statement

    return 0;

}

int sumOfDigits(n){

    int saved = 0;       //declaring variable for holding previous value of (n) while function recursively calls itself

    if(n < 10){
    
        return n;       //return last calculated value before function recursively adds together values

    }else{
        
        saved = n % 10;      //save value of n % 10(last digit of iput)

        n = (n - (n % 10)) / 10;     //calculate (n) by using modulo and then dividing by 10
        

       return saved + sumOfDigits(n);        //return value of saved variable + recursive function(n)

        


         }      
}
