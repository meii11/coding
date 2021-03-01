#include <stdio.h>
void Temperatures(double temperature);

void main(){
    double f_temperature;
    int i_tmp;
    printf("Enter a degree on F: ");
    i_tmp = scanf("%lf", &f_temperature);
    while(i_tmp == 1){
        Temperatures(f_temperature);
        printf("Enter another degree on F: ");
        i_tmp = scanf("%lf", &f_temperature);
    }
}

void Temperatures(double temperature){
    double f_c, f_k;
    f_c = 5.0 / 9.0 * (temperature - 32.0);
    f_k = f_c + 273.16;
    printf(" %.2f F \n %.2f C\n %.2f K\n",temperature, f_c, f_k);
}