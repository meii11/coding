#include <stdio.h>

void main(){
    char c_num[20];
    printf("enter a vocabulary: ");
    scanf("%s", c_num);
    int i_len = strlen(c_num);
    for(int i=i_len;i>=0;i--){
        printf("%c", c_num[i]);
    }
}