#include <stdio.h>
double harmonic_mean(double, double);

void main(){
    double x, y;

    printf("Enter two numbers: \n");
    scanf("%lf %lf", &x, &y);

    printf("%.3f", harmonic_mean(x, y));
}

double harmonic_mean(double a, double b){
    a = 1 / a;
    b = 1 / b;
    a = (a + b) / 2;
    a = 1 / a;
    return a;
}
