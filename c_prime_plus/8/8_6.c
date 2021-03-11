#include <stdio.h>
#include <ctype.h>

void main(){
    int ch;
    while((ch = getchar()) != EOF){
        if(isspace(ch)){
            continue;
        }
        else{
            putchar(ch);
            break;
        }
    }
}