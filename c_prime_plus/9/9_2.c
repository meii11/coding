#include <stdio.h>
void chline(char, int, int);

void main(){
    char ch = '*';
    int i=2, j=3;
    chline(ch, i, j);
    return ;
}

void chline(char ch, int x, int y){
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            putchar(ch);
        }
        putchar('\n');
    }
    return;
}