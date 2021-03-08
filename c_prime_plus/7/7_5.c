#include <stdio.h>

void main(){
    char ch;
    int i_change = 0;

    while((ch=getchar()) != '#'){
        switch(ch){
            case '.':
                putchar('!');
                i_change ++;
                break;
            case '!':
                putchar('!');
                putchar('!');
                i_change++;
                break;
            default:
                putchar(ch);

        }
    }
    putchar('\n');
}