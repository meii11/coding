#include <stdio.h>

int main(){
    float f_water_molecular = 3.0e-23;
    int i_water;
    printf("Enter the number of pints of water: ");
    scanf("%d", &i_water);
    i_water *= 950;
    float ff_water = i_water / f_water_molecular;
    printf("the number of molecular are: %f", ff_water);
    return 0;
}