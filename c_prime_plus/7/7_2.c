#include <stdio.h>

void main(){
    char ch;
    int i_ch=1;

    printf("Please enter some text; enter # to quit.\n");

    while((ch=getchar()) != '#'){
        if(i_ch % 9 != 0){
            printf("%c-%d ", ch, ch);
            i_ch ++;
        }
        else{
            i_ch = 2;
            printf("\n");
            printf("%c-%d ", ch, ch);
        }
    }
    printf("\n done!");
}
