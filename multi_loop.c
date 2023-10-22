#include <stdio.h>

int main(){

int power = 0;
int resist = 0;
int weight = 0;
int height = 0;
int all = 0;
int pr = 0;
int wh = 0;
int num;
int i;

	scanf("%d",&num);
	for(i = 0; i < num; i++){	
	scanf("%d%d%d%d",&height,&weight,&power,&resist);
	pr = resist + power;
	wh = weight - height;
	all = all + pr * wh;
	}

printf("%d\n",all);
		
return 0;

}
