#include <stdio.h>
#include <ctype.h>

void main(){
    int ch;
    int i_upper=0, i_lower=0;
    while((ch = getchar()) != EOF){
        if(islower(ch)){
            i_lower++;
        }
        else if(isupper(ch)){
            i_upper++;
        }
    }
    printf("You have %d upper words and %d lower words.\n", i_upper,i_lower);
}