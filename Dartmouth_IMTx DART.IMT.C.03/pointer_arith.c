#include <stdio.h>
int main() {
    //! showMemory(start=65520)
    int arr[3] = {15, 16, 17};
    printf("%p\n",arr);
    int * ptr = arr;  //pointer variable 'ptr' becomes an int(4 bytes) with variable with value of memory address of first cell of array
    * ptr = 2;      // * arr OR arr[0]  (* ptr = 2 is putting value of 2 into first cell of array 'arr')
    * (ptr + 1) = 3; // * (arr + 1)   OR  arr[1] 
    * (ptr + 2) = 5;// * (arr + 2)   OR arr[2]
    * ptr + 1 = 3;
    return 0;
}
