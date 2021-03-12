#include <stdio.h>
double min(double, double);

void main(){
    double x, y;
    printf("Enter one pair of numbers: \n");
    scanf("%lf %lf", &x, &y);
    x = min(x, y);
    printf("%.1lf", x);
}

double min(double a, double b){
    return a<b ? a: b;
}