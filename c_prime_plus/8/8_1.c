#include <stdio.h>

void main(){
    int ch;
    int i_count = 0;

    while((ch=getchar()) != EOF){
        i_count ++;
    }
    printf("you have %d characters.", i_count);
}