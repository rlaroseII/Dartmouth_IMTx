#include <stdio.h>

int main(void){           
                
int num = 0;
int output = 0;
int input;
int i;

scanf("%d",&input);

for (i = num; i < 11; i++){
        printf("%dx%d = %d\n",num,input,output);          
        num = num + 1;
        output = num * input;

} 
return 0;

}
