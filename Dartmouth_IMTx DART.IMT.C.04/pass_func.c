#include <stdio.h>
void timesTwo(int *);

int main(void) {
    //! showMemory(start=65520)
    int n;
    printf("Please enter an integer: ");
    scanf("%d", &n);
    printf("In main: You entered%d.\n", n);
    timesTwo(&n);   //pass variable into function
    printf("In main: The value of n is %d.", n);

    return 0;
}


void timesTwo(int * numptr){
    printf("In the function: the number is%d.\n", *numptr);
    numptr = numptr * 2;    //change value of variable within the function only
    printf("In the function: the new number is %d.\n", *numptr);
}
