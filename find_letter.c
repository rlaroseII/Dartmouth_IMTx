#include <stdio.h>

int main(void){

    char word[50];
   
    int l = 0;
    int length = 0;


    scanf("%s",word);
        while(word[length] != '\0'){
            length++;
        }


        while(word[l]!= 't' && word[l] != 'T'){
            l++;
            if(word[l] == 't' || word[l] == 'T' || word[l] == '\0'){
                l = l;
                break;
            }
        }
        

        if(l <= (length / 2) || l == 0){
                while(word[l] == 't' || word[l] == 'T'){

                    printf("1\n");
                    break;
                }

        }else{

          if(word[l] >= (length / 2) && word[l] != 0 && word[l] != '\0'){

             while(word[l] == 't' || word[l] == 'T'){

                printf("2\n");
                break;
             }

            }else{

                    printf("-1\n");



            }
            }



    return 0;
}
