#include <stdio.h>
void triplet(double number);

int main(){
    double f_num;
    printf("Enter a number: ");
    scanf("%lf", &f_num);
    triplet(f_num);
    return 0;
}

void triplet(double number){
    number = number * number * number;
    printf("%f~~", number);
}