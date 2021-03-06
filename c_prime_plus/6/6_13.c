#include <stdio.h>
#include <math.h>

void main(){
    int i_array[8];
    for(int i=0;i<8;i++){
        i_array[i] = pow(2, i); 
    }
    int i=0;
    do{
        printf("%d\t", i_array[i]);
        i++;
    }while(i<8);
}