#include <stdio.h>

void main(){
    char ch;
    int i_change = 0;

    while((ch=getchar()) != '#'){
        if(ch == '.'){
            putchar('!');
        }
        else if(ch == '!'){
            putchar('!');
            putchar('!');
        }
        else{
            putchar(ch);
        }
    }
    putchar('\n');
}