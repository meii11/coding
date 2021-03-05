#include <stdio.h>
void main(){
    char c_array[26];
    for(int i=0;i<26;i++){
        c_array[i] = 'a'+i;
    }
    for(int i=0;i<26;i++){
        printf("%c ", c_array[i]);
    }
}