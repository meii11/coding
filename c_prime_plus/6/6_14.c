#include <stdio.h>

void main(){
    double f_1[8], f_2[8];
    for(int i=0;i<8;i++){
        printf("enter %d 'th float number: ", i);
        scanf("%lf", &f_1[i]);
        if(i==0){
            f_2[i] = f_1[i];
        }
        else{
            f_2[i] = f_1[i] + f_1[i-1];
        }
    }

    for(int i=0;i<8;i++){
        printf("%4.4lf ", f_1[i]);
    }
    printf("\n");
    for(int i=0;i<8;i++){
        printf("%4.4lf ", f_2[i]);
    }
}