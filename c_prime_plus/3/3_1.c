#include <stdio.h>

int main(){
    int i_num = 32767;
    float f_num = 3.4e38;
    printf("%d, %e \n", i_num, f_num);
    i_num += 2;
    f_num *= 10;
    printf("%d, %e \n", i_num, f_num);
    printf("%d, %d", sizeof(int), sizeof(float));
    return 0;
}
