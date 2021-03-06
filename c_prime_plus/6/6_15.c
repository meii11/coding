#include <stdio.h>
#include <string.h>

void main(){
    char c_array[40];
    int i_len;

    printf("Enter a set of characters: ");
    scanf("%s", c_array);

    i_len = strlen(c_array);
    for(int i=i_len-1;i>=0;i--){
        printf("%c ", c_array[i]);
    }
}