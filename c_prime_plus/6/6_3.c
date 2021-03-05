#include <stdio.h>

void main(){
    const char c_letter = 'F';
    for(int i=1;i<=6;i++){
        for(int j=0;j<i;j++){
            printf("%c", c_letter-j);
        }
    printf("\n");
    }
}