#include <stdio.h>
void add(int, int, int *);
int main(void) {
    //! showMemory(start=65520)
	int a = 0;
    int b = 0;
    int sum = 0;
	printf("Please enter two integers: ");
	scanf("%d%d", &a, &b);
	add(a,b, &sum);   //passing memory address of 'sum' into function add().
	printf("%d + %d = %d\n", a, b, sum);
    return 0;
}

void add(int x, int y, int *resultptr) {  //function is void since no return value is needed
                                          //since we are directly changing the value using a pointer.
    int z;
    z = x+y;
    printf("Added numbers in the function!\n");
    *resultptr = z;  //replacing value in the "sum" variable in main()
                     //by dereferencing using "sums" memory address and replacing it with
                     //the new value of variable z.
    printf("Updated variable with pointer in function.\n");
}
