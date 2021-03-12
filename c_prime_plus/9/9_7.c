#include <stdio.h>
#include <ctype.h>
int alpha_position(char);

void main(){
    int ch;
    printf("Enter some text: \n");
    while((ch = getchar()) != EOF){
        if(!isalpha(ch)){
            putchar(ch);
            printf(" is not a character.\n");
        }
        else{
            putchar(ch);
            printf(" is a character.");
            printf(" And the position of %c in alphabet is %d \n", ch, alpha_position(ch));
        }
    }
    return;
}

int alpha_position(char ch){
    ch = tolower(ch);
    return ch - 96;
}