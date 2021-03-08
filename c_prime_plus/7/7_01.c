#include <stdio.h>

void main(){
    int count = 0;
    char ch;
    while(count<10){
        ch = getchar();
        if (ch==' ')
        {
            continue;
        }
        putchar(ch);
        count++;
        
    }
}