#include <stdio.h>

void main(){
    float f_count = 1000000.0, f_rate=0.1;
    int i_year = 0;

    while(f_count>0){
        f_count -= 100000;
        f_count *= (1+f_rate);
        i_year ++;
    }
    printf("after %d years", i_year);
}