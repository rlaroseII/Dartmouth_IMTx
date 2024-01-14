#include <stdio.h>

void met_conv(double imp);          //prototype function

int main(void){
    
int i = 0;
int num_inputs = 0;
double imp = 0;
 
    
    scanf("%d", &num_inputs);       //scanning for number of inputs
    for(i=0; i<num_inputs; i++){        //scanning for inputs
        met_conv(imp);                     
            
    }   


    return 0;

}

    

void met_conv(double imp)
{
double input = 0;
char unit[0];
double feet_conv = 0;
double pounds_conv = 0;
double fahr_conv = 0;
    
        scanf("%lf", &input);
        scanf("%s", unit);

    feet_conv = input * 3.2808;
    pounds_conv = input * 0.002205;
    fahr_conv = 32 + 1.8 * input;
        if(unit[0] == 'm'){
            imp = feet_conv;
            printf("%.6f ft", imp);
        }else{
             if(unit[0] == 'g'){
                 imp = pounds_conv;
                printf("%.6f lbs", imp);
             }else{
                  imp = fahr_conv;
                  printf("%.6f f", imp);
                  }
             }
     
    printf("\n");
}
   
    

