#include <stdio.h>
int i(int);
int d(int);
int s(int);
int c(int);

int main(void){

    char type;
    int num_var = 0;

    scanf("%c %d", &type, &num_var);

    if(type == 'i'){
            i(num_var);
    }else{
         if(type == 'd'){
            d(num_var);

    }else{
         if(type == 's'){
            s(num_var);

    }else{
         if(type == 'c'){
             c(num_var);
         }
         } 
         }
         }
return 0;
    }
       

int i(input){

 int mb_total = 0;
 int kb_total = 0;
 int b_total = 0;
   mb_total = (sizeof(int) * input) / 1000000;
   kb_total = ((sizeof(int) * input) / 1000) % 1000;
   b_total = (sizeof(int) * input)  % 1000;

   if(mb_total > 0 && kb_total > 0 && b_total >= 0){

       printf("%d MB and %d KB and %d B\n", mb_total, kb_total, b_total);

       }else{
            if(mb_total < 1 && kb_total > 0 && b_total >= 0){

                printf("%d KB and %d B\n", kb_total, b_total);

       }else{
            if(mb_total < 1 && kb_total < 1 && b_total >= 0){

                printf("%d B\n", b_total);
             }

}
}
return 0;
}


int d(input){
 int mb_total = 0;
 int kb_total = 0;
 int b_total = 0;
   mb_total = (sizeof(double) * input) / 1000000;
   kb_total = ((sizeof(double) * input) / 1000) % 1000;
   b_total = (sizeof(double) * input)  % 1000;

   if(mb_total > 0 && kb_total > 0 && b_total >= 0){

       printf("%d MB and %d KB and %d B\n", mb_total, kb_total, b_total);

       }else{
            if(mb_total < 1 && kb_total > 0 && b_total >= 0){

                printf("%d KB and %d B\n", kb_total, b_total);

       }else{
            if(mb_total < 1 && kb_total < 1 && b_total >= 0){

                printf("%d B\n", b_total);
             }

}
}
return 0;
}


int s(input){
 int mb_total = 0;
 int kb_total = 0;
 int b_total = 0;
   mb_total = (sizeof(short) * input) / 1000000;
   kb_total = ((sizeof(short) * input) / 1000) % 1000;
   b_total = (sizeof(short) * input)  % 1000;

   if(mb_total > 0 && kb_total > 0 && b_total >= 0){

       printf("%d MB and %d KB and %d B\n", mb_total, kb_total, b_total);

       }else{
            if(mb_total < 1 && kb_total > 0 && b_total >= 0){

                printf("%d KB and %d B\n", kb_total, b_total);

       }else{
            if(mb_total < 1 && kb_total < 1 && b_total >= 0){

                printf("%d B\n", b_total);
             }

}
}
return 0;
}


int c(input){

 int mb_total = 0;
 int kb_total = 0;
 int b_total = 0;
   mb_total = (sizeof(char) * input) / 1000000;  
   kb_total = ((sizeof(char) * input) / 1000) % 1000;
   b_total = (sizeof(char) * input)  % 1000;

   if(mb_total > 0 && kb_total > 0 && b_total >= 0){
       
       printf("%d MB and %d KB and %d B\n", mb_total, kb_total, b_total);

       }else{
            if(mb_total < 1 && kb_total > 0 && b_total >= 0){

                printf("%d KB and %d B\n", kb_total, b_total);

       }else{
            if(mb_total < 1 && kb_total < 1 && b_total >= 0){

                printf("%d B\n", b_total);
             }

}
}
return 0;
}

/*
 *
 * //Instructors solution//
 *
 * #include <stdio.h>

int main(void){
    char c;
    int num;
    int spacePer;
    int memory;
    int mega, kilo, byte;

    scanf("%c", &c);
    scanf("%d", &num);

    if (c=='c') spacePer = sizeof(char);
    else if (c=='s') spacePer = sizeof(short);
    else if (c=='i') spacePer = sizeof(int);
    else spacePer = sizeof(double);

    memory = spacePer*num;
    mega = memory/1000000;
    kilo = (memory-mega*1000000)/1000;
    byte = memory-mega*1000000-kilo*1000;

    if (mega>0){
        printf("%d MB and %d KB and %d B", mega, kilo, byte);
    } else if (kilo>0){
        printf("%d KB and %d B", kilo, byte);
    } else{
        printf("%d B", byte);
    }

    return 0;
}

*/
