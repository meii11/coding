#include <stdio.h>

void main(){
    char ch;
    int i_ei = 0;
    char c_former;

    printf("%s", c_former);
    while((ch=getchar()) != '#'){
        if(c_former == 'e' && ch == 'i'){
            i_ei ++;
        }
        c_former = ch;
    }
    putchar('\n');
    printf("%d", i_ei);
}