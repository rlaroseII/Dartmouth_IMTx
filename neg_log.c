#include <stdio.h>

int main(void){

	int height = 0;
	int leaf = 0;

	scanf("%d %d", &height, &leaf);
	 if(height <= 5 && leaf >= 8){
		printf("Tinuviel");
	 }else{
	 	if(height >= 10 && leaf >= 10){
		 printf("Calaelen");
	 }else{
	 	if(height <= 8 && leaf <= 5){
		 printf("Falarion");
	 }else{
	 	if(height >= 12 && leaf <= 7){
		 printf("Dorthonion");
	}else{
		printf("Uncertain");
	}}}}

	return 0;
}







