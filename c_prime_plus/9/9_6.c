#include <stdio.h>
void min_middle_max(double *, double *, double *);

void main(){
    double x, y, z;
    printf("Enter three numbers: \n");
    scanf("%lf %lf %lf", &x, &y, &z);
    min_middle_max(&x, &y, &z);
    printf("Eventually, x=%.1f, y=%.1f, z=%.1f", x, y, z);
}

void min_middle_max(double * a, double * b, double * c){
    double tmp1, tmp2, tmp3;
    tmp1 = (*a < *b ? *a : *b) < *c ? (*a < *b ? *a : *b): *c;  // min
    tmp3 = (*a > *b ? *a : *b) > *c ? (*a > *b ? *a : *b): *c;  // max
    tmp2 = *a > *b ? (*b > *c ? *b : (*a > *c ? *c : *a)) : (*a > *c ? *a: (*b > *c ? *c : *a));
    *a = tmp1;
    *b = tmp2;
    *c = tmp3;

}