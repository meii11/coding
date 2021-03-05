#include <stdio.h>
float do_caculate(float num1, float num2);

void main(){
    float f_num1, f_num2;
    printf("enter two numbers: \n");
    printf("or enter q to quit.\n");

    while(scanf("%f %f", &f_num1, &f_num2)){
        float f_result = do_caculate(f_num1, f_num2);
        printf("%f\n", f_result);
        printf("please enter another pair of numbers: \n");
    }
    
}

float do_caculate(float num1, float num2){
    if(num1 < num2){
        float tmp = num1;
        num1 = num2;
        num2 = tmp;
    }
    return (num1-num2)/(num2*num1);
}