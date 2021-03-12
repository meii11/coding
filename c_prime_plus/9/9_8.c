#include <stdio.h>
double power(double, int, double *);


int main(void){
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");
    while(scanf("%lf%d", &x, &exp) == 2){
        power(x, exp, &xpow);
        printf("%.3g to the power %d is %.5lf\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit. \n");
    }
    printf("Done!!");

    return 0;
}

double power(double n, int p, double * xpow){
    double pow = 1;
    int i;
    
    if(n!=0 && p==0){
        pow = 1;
    }
    else if(n==0 && p!=0){
        pow = 0;
    }
    else if(n==0 && p==0){
        printf("0^0 is not defined, so we defined it equal to 1. \n");
        pow = 1;
    }
    else if(p>0){
        for(i=1;i<=p;i++){
            pow *= n;
        }
    }
    else if(p<0){
        for(i=1;i<=-p;i++){
            pow *= 1/n;
        }
    }
    *xpow = pow;
}

