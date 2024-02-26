#include <stdio.h>
void reverseArray(int *);

int main(void){
    int i = 0;

    int arr[6];
    for(i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }
    reverseArray(arr);
    printf("%d %d %d %d %d %d", arr[0],arr[1],arr[2],arr[3],arr[4],arr[5]);

return 0;

}
void reverseArray(int array[]){
    int swap0 = 0;
    int swap1 = 0;
    int swap2 = 0;

    swap0 = array[0];
    swap1 = array[1];
    swap2 = array[2];

    array[0] = array[5];
    array[1] = array[4];
    array[2] = array[3];
    array[3] = swap2;
    array[4] = swap1;
    array[5] = swap0;


}

    

