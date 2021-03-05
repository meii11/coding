#include <stdio.h>
#include <string.h>

void main(){
    int i_array[8], i_len;
    printf("enter 8 numbers: ");
    for(int i=0;i<8;i++){
        scanf("%d",&i_array[i]);
    }
    for(int i=7;i>=0;i--){
        printf("%d\t", i_array[i]);
    }
}