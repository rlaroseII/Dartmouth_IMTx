#include <stdio.h>

void reset(int *);
int main() {
    //! showMemory(start=65520)
    int arr[3] = {15, 16, 17};
    reset(arr);
    return 0;
}

void reset(int * ptr){  //allocating space in memory for pointer variable 'ptr' 
    * ptr = 0;          //changing array value 'arr[0]' in main function using pointer dereferencing
    * (ptr + 1) = 0;
    * (ptr + 2) = 0;
}


/*
 // Below is the equivalent of the above function
 //
 * void reset(int * ptr){
    ptr[0] = 0;
    ptr[1] = 0;
    ptr[2] = 0;
}
*/
