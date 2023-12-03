#include <stdio.h>

int main(void){

    int num_name = 0;
    char first[100];
    char last[100];
    int i = 0;

    scanf("%d", &num_name);     
    
    while(i < num_name){
       i++;
       scanf("%s %s", first, last);     //scan for char1 char 2
       printf("%s %s\n", last, first);  //print chars in reverse order
    }
    return 0;
} 
       

