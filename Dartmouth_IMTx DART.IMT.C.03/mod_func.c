#include <stdio.h>
void addThree(int *);
int main() {
    //! showMemory(start=65520)
    

    int a = 5;
    addThree(&a); //'&' before variable references memory address of variable
    printf("inside main, value of a: %d\n",a);

    return 0;
}

void addThree(int * a){
        * a = * a + 3;  //calling memory address of variable 'a' and manipulating variable within
        printf("inside addThree, value of a: %d\n",*a);     //printing new value of variable 'a'
        
       
        }
