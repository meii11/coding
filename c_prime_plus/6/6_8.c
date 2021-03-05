#include <stdio.h>

void main(){
    float f_num1, f_num2;
    printf("enter two numbers: \n");
    printf("or enter q to quit.\n");
    

    while(scanf("%f %f", &f_num1, &f_num2)){
        printf("%f\n", (f_num1-f_num2)/(f_num2*f_num1));
        printf("please enter another pair of numbers: \n");
    }
    
}