#include <stdio.h>

void main(){
    char c_ch;
    int i_space=0;
    int i_n=0;
    int i_other=0;

    printf("Please enter some strings: ");

    while((c_ch=getchar()) != '#'){
        if(c_ch==' '){
            i_space++;
        }
        else if(c_ch=='\n'){
            i_n++;
        }
        else{
            i_other++;
        }
    }
    printf("you have %d space, %d line break and %d other characters.", i_space, i_n, i_other);
}