#include <stdio.h>
#include <ctype.h>
char judge_alpha(void){
    int ch;
    ch = getchar();
    if(ch>=0 && ch<=9){
        printf("ERROR, Please enter alpha not number");
        
    }
    return ch;
}
void main(){
    int ch;
    int i_counter = 0;

    while((ch = judge_alpha()) != EOF){
        if(isspace(ch)){
            i_counter ++;
        }
    }
    printf("There are %d words.", i_counter);
}