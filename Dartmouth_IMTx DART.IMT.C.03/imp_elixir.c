#include <stdio.h>

//Write your function prototype here

void elixir(int *);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	//Write your function call here
    elixir(ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}

void elixir(int * input)
{
    if( * input >= 21)
    {
    * input = * input - 10;
    }else
    {
    if( * input < 21)
      {
      * input = (* input) * 2;
      }   
    }
}   

//Write your function here

/*
//Instructors solution

#include <stdio.h>

void elixir(int *);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	elixir(ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}


void elixir(int *age){
	if (*age>20){
		*age -= 10;
	} else {
		*age *= 2;
	}
}
*/
