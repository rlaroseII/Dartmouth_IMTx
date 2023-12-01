#include <stdio.h>

int main(void){
    
   int min_temp = 0;
   int max_temp = 0;
   int read_temp = 0;
   
   scanf("%d %d", &min_temp, &max_temp);    //scan for input

    while(read_temp != -999){         
        scanf("%d", &read_temp);
      if(read_temp == -999){            //first if statement used for break using the same value as while loop
          break;
      }else{  
           if(read_temp > max_temp){   
               printf("Alert!\n");
               break;
           }else{
                if(read_temp < min_temp){
                    printf("Alert!\n");
                    break;
                }else{
                    printf("Nothing to report\n");
             }}}}
          
    return 0;
}



/*
 * instructors solution
 *
 * #include <stdio.h>
int main()
{
    int tempMin, tempMax, temperature;
    int tempIsValid = 1;
    int end = 0;
    scanf("%d%d", &tempMin, &tempMax);

    while (!end && tempIsValid){
        scanf("%d", &temperature);
        end = (temperature == -999);

        tempIsValid = (tempMin <= temperature && temperature <= tempMax);

        if(!end){
            if (tempIsValid){
                printf("Nothing to report\n");
            } else {
                printf("Alert!\n");
            }
        }
    }

    return 0;
}
*/
