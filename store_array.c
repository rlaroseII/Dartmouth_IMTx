#include <stdio.h>

int main(void){
	
	int array[10];		
	int read_value = 0;
	int cell_num = 0;
	int i;
	int num_array ;

	for(i = 0; i < 10; i++){	//for loop iteration per number of expected inputs
		scanf("%d",&read_value);	//scanning for input
		array[cell_num] = read_value;	//assigning values to each cell number in array
		cell_num = cell_num + 1;	//by incrementing cell number by one each iteration
	}
	scanf("%d",&num_array);			//scanning for final input calling data held in cell number
						            //to output.
	printf("%d",array[num_array]);		//print statement with format modifier being assigned value of
						        //array[<scanned input>] which will match a previous scanned	
	return 0;				    //input having been assigned a cell number(read_value).
}



/*#include <stdio.h>

int main(void){
        int array[5];
        int readValue = 0;
        int cellNumber = 0;
        int i = 0;
        for(i =0; i < 5; i++){                  //for loop iterating as many times as there are array values
                printf("Enter a value:");
                scanf("%d",&readValue);         //scan for value
                array[cellNumber] = readValue;  //declare value of 'cellNumber' (array) and assign to variable 'readValue'
                printf("Cell number %d contains %d\n",cellNumber,array[cellNumber]); //print statement with second data argument equaling
                                                                                     //the user input array[cellNumber]
                cellNumber = cellNumber + 1;                                    //increment cell number of array
        }
        return 0;
}
*/
