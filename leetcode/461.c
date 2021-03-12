#include <stdio.h>

void main(void){
    unsigned long number1=23, number2=17;
    int i=0;
    for(;number1!=0 || number2!=0;){
        if((number1 % 2) != (number2 % 2))
            i ++ ;
        number1 /= 2;
        number2 /= 2;
    }

    printf("%d", i);
    
}
