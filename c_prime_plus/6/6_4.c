#include <stdio.h>

void main(){
    for(int i=0, tmp=0, j=0;i<=5;i++, tmp+=j){
        for(j=0;j<=i;j++){
            printf("%c", 'A'+tmp+j);
        }
        printf("\n");
    }
}