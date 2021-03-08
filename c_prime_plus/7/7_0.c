#include <stdio.h>
#define SPACE ' '

void main(){
    char ch;
    ch = getchar();
    while (ch != '\n')
    {
        /* code */
        if (ch == SPACE)
        {
            /* code */
            putchar(ch);
        }
        else
        {
            putchar(ch + 1);
        }
        ch = getchar();
        
    }
    putchar(ch);
}