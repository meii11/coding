#include <stdio.h>

void main(){
    float f_balance1=10000.0, f_balance2=10000.0;
    int i_year=0;
    const float f_rate1=0.1, f_rate2=0.05;

    do{
        f_balance1 += 10000.0 * f_rate1;
        f_balance2 *= (1 + f_rate2);
        i_year++;
    }while(f_balance2<f_balance1);
    printf("%.2f--%.2f \n", f_balance1, f_balance2);
    printf("%d",i_year);


}