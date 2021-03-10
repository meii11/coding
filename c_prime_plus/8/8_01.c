#include <stdio.h>

void main(){
    char ch;
    while((ch=getchar())!='\n'){
        putchar(ch);
        printf(" ");
    }
}