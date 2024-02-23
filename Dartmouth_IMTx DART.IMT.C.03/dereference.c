#include <stdio.h>
int main(){
    //! showMemory(start=65520)
 
    double a = 42.98;
    double * addressOfA = &a;  //Declaring pointer variable
    printf("At the address %p there is the value %.2lf\n", addressOfA,* addressOfA); //Dereferencing pointer
    char c = 'm';
    char * addressOfC = &c;
    char d = * addressOfC;
    * addressOfA = 32;
    * addressOfA = * addressOfA + 1;
    printf("At the address %p there is the value %.2lf\n", addressOfA,* addressOfA);
    return 0;
}
