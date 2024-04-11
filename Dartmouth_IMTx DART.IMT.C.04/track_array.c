#include <stdio.h>
#include <stdlib.h>

int ** allocateIntStarArray(int);
int * allocateIntArray(int);

int main (void){
    //! showMemory(cursors=[matrix[0], matrix[1]], start=65520)
    //! matrix = showArray2D(matrix, rowCursors=[line], colCursors=[col])
    int line = 0;
    int col = 0;
    int numLine = 0;
    int numCol = 0;
    int numLinePtr = 0;
    int numColPtr = 0;

    scanf("%d %d", &numLine, &numCol);

    int matrix[numCol][numLine];        //declaring matrix AFTER scanning for number of line/col of matrix

    for(col = 0; col < numCol ; col++){
        for(line = 0; line < numLine; line++){
            scanf("%d",&matrix[col][line]);
                        
        }
    }

    for(col = 0; col < numCol ; col++){
        for(line = 0; line < numLine; line++){
            if(matrix[col][line] > 1000) {
                printf("[X]");
            }else{
                if(matrix[col][line] >= 100 && matrix[col][line] <= 1000){
                    printf("[*]");

             }else{
                 printf("[ ]");
        }
            }
            }

        printf("\n");
           
    
    }
    return 0;


}

int ** allocateIntStarArray(int num){
    int ** ptr = (int **) malloc(num * sizeof(int *));
    return ptr;
}


int * allocateIntArray(int num){
    int * ptr = (int *) malloc(num * sizeof(int));
    return ptr;
}
