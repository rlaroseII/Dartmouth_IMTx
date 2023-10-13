#include <stdio.h>

int main(void){

int i;
int num = 0;
int multi = 0;
for (i = num; i < 11;i++){

        printf("%dx8 = %d\n",num,multi);
        num = num + 1;
	multi = multi + 8;

}
return 0;

}

