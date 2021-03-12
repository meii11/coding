#include <stdio.h>
double power(double, int);


int main(void){
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");
    while(scanf("%lf%d", &x, &exp) == 2){
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5lf\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit. \n");
    }
    printf("Done!!");

    return 0;
}

double power(double n, int p){
    int i;

    if(p>1){
        return n*power(n, p-1);
    }
    else if(p==1){
        return n;
    }
}

