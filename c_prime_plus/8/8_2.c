#include <stdio.h>

void main(){
    int ch;

    while((ch = getchar()) != EOF){
        putchar(ch);
        putchar(' ');
        printf("%d\n", ch);
    }
}