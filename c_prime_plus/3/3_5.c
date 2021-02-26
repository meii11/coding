#include <stdio.h>

int main(){
    int i_age;
    float f_second = 3.156e7;
    printf("Please enter your age:__\b\b");
    scanf("%d", &i_age);
    float f_ageSecond = i_age * f_second;
    printf("Your seconds are: %f", f_ageSecond);
    return 0;

}