#include <stdio.h>
void larger_of(double *, double *);

void main(){
    double x, y;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);

    larger_of(&x, &y);
    printf("Eventually, numbers become %.1f and %.1f.", x, y);
}

void larger_of(double * x, double * y){  // 这里只是用来声明变量为指针
    if(*x < *y){
        *x = *y;
    }
    else{
        *y = *x;
    }
}
