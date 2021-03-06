#include <stdio.h>

void main(){
    int i_friend=5, i_year=0;

    do{
        i_friend-=i_year;
        i_friend *= 2;
        i_year++;
        printf("You have %d friends\n", i_friend);
    }while(i_friend<=750);
    printf("\n%d", i_year);
}