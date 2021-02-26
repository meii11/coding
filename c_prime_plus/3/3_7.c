#include <stdio.h>

int main(){
    float f_inch;
    float f_inch_to_cm = 2.54;
    printf("Enter your height in inch:");
    scanf("%f", &f_inch);
    float f_height = f_inch * f_inch_to_cm;
    printf("Your height in cm is: %f", f_height);

    return 0;
}