#include <stdio.h>

int main(){

int num = 0;
int power = 0;
int resist = 0;
int weight = 0;
int height = 0;
int all = 0;
int n = 0;
int q = 0;

	scanf("%d%d%d%d%d",&num, &height, &weight, &power, &resist);

	for( int i = 0; i <= num;i++){ 
        n = power + resist;
	q = weight - height;
	all = n * q;	
	}
	printf("%d\n",all);
		
return 0;

}
